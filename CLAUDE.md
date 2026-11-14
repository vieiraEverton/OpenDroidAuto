# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

OpenDroidAuto is an unofficial Android Auto implementation for Honda Connect head units running Android 4.0.4 (API 15, Ice Cream Sandwich). It runs on Honda Civic, HR-V, CR-V, Jazz, and similar 2015–2019 Honda models. The APK is installed directly on the head unit.

The codebase is ~97% C++ (Android Auto protocol implementation) with thin Java wrappers, targeting armeabi-v7a (32-bit ARM) only.

## Build Commands

```bash
# Build the common library first (required before assembleRelease)
./gradlew :common:assemble

# Build the full release APK
./gradlew assembleRelease
# Output: app/build/outputs/apk/release/HondaAppCenter_A1.apk

# Build debug APK
./gradlew assembleDebug
```

There are no automated tests to run — the test configuration is minimal and targets the legacy API 15 environment.

**NDK requirement**: NDK version 17.2.4988734 must be installed. The build will fail with other NDK versions due to C++ compatibility constraints. Set `ANDROID_NDK_HOME` to this specific version.

## Module Architecture

The project has four Gradle modules:

### `:aasdk` — Android Auto Protocol (primary logic)
The core library. Implements the full Android Auto wire protocol via JNI-bridged C++ code in `aasdk/src/main/cpp/libaasdk-jni/`. Key subsystems:
- `transport/` — USB (`LibUsbDevice`) and TCP (`TCPEndpoint`) transports
- `channel/` — AA protocol channels (video, audio, sensor, input, Bluetooth)
- `messenger/` — Protobuf message framing and dispatch
- `service/` — Input, video, sensor, Bluetooth service implementations
- `projection/` — Output device abstraction interfaces

Java entry point: `AndroidAutoEntity.java` — owns the AA session lifecycle.

### `:common` — Shared Native Utilities
Provides `libcommon.so` as a Prefab CMake module consumed by `:aasdk`. Contains `Log.cpp`, `JNIBase.cpp`, and `Data.cpp`. Must be built before other modules.

### `:omxvideocodec` — Video Decoding
OpenMAX IL wrapper for hardware video decoding on the head unit. Used by the video output pipeline in `:app`.

### `:app` — Android Application Shell
Thin Java/Android layer. Key classes:
- `ODAService.java` — Foreground service that owns the AA session; starts/stops `AndroidAutoEntity`
- `MainActivity.java` — Detects USB device attachment, launches the service
- `Settings.java` — Singleton with 6 inner classes (Car, Keymap, Advanced, Video, Audio, Connectivity) backed by SharedPreferences
- `DeviceFactory.java` — Creates audio/video/input device implementations passed to `:aasdk`
- `HondaConnectManager.java` — Feature-gated Honda proprietary AIDL integration (Fujitsu-Ten APIs)

## Honda Proprietary Integration

`ext-libs/ada-ext-api.jar` is a proprietary Honda SDK (~964KB) providing access to head unit services via AIDL. Three AIDL interfaces in `app/src/main/aidl/com/fujitsu_ten/`:
- `IEcNcService` — EC/NC voice control
- `ISteeringMenuService` / `ISteeringMenuServiceCallback` — Steering wheel button events

Honda integration is feature-gated: `Settings.Car.hondaIntegrationEnabled()` controls whether `HondaConnectManager` binds to these services. The integration uses two auth modes:
- **PREINSTALL** — App is pre-authorized by the head unit; `LastMode` (auto-resume) is unreliable in this mode
- **THIRD_PARTY** — Standard app mode; more reliable resume behavior but different permissions

## Key Architectural Constraints

- **API 15 target**: MultiDex is required (`ODAApplication extends MultiDexApplication`). Many modern Android APIs are unavailable.
- **Single ABI**: Only `armeabi-v7a` is built — no 64-bit.
- **Compile vs target SDK mismatch**: `compileSdk 34` but `targetSdk 15` — intentional for legacy compatibility.
- **Foreground service**: AA projection runs exclusively in `ODAService` as a foreground service; this is the only supported execution context.
- **Audio focus model**: The Honda head unit's audio focus behavior (especially during rear camera activation) directly impacts service continuity. The HU can forcibly push the app to background with no reliable resume callback in PREINSTALL mode.

## Known Open Issues

- **#41**: Rear camera crashes app in PREINSTALL mode — architectural limitation; `LastMode` does not work correctly when HU reclaims focus
- **#44**: Frequent crashes on startup
- **#46**: Device microphone integration problems
- **#40**: Radio seek broken in 2.5.1/2.5.2
- **#30**: Spotify notifications crash app
