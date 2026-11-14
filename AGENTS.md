# Diretrizes e Instruções Operacionais - OpenDroidAuto (Honda Civic EXR 2016 Brasil)

Este documento estabelece as regras de desenvolvimento, arquitetura de hardware, restrições e procedimentos de build para o **OpenDroidAuto** operando na central multimídia Honda Connect do **Honda Civic EXR 2016 Brasil**.

---

## 🏛️ 1. Arquitetura da Plataforma & Hardware

- **Veículo Alvo:** Honda Civic EXR 2016 Brasil (Facelift 9ª geração).
- **Central Multimídia:** Fujitsu Ten Display Audio (7 polegadas touch capacitivo).
- **SoC:** Nvidia Tegra 3 (T30) Quad-Core ARM Cortex-A9 32-bit (`armeabi-v7a`).
- **Sistema Operacional:** Android 4.0.4 (Ice Cream Sandwich, API 15).
- **Painel Superior:** I-MID (Intelligent Multi-Information Display).
- **Links Obrigatórios:** Utilize markdown com links clicáveis `file://` para arquivos e pastas.

---

## ⚙️ 2. Ambiente de Build & Ferramental

- **JDK Obrigatório:** Use exclusivamente **JDK 17** (`JAVA_HOME=/home/everton/.jdks/jdk-17.0.21+9`). O Gradle 8.11 com alvo Java 7 falha em JDKs mais recentes como o OpenJDK 25.
- **Android NDK:** Versão **r17c** (`17.2.4988734`) localizada em `/home/everton/Android/Sdk/ndk/17.2.4988734`.
- **Compatibilidade no Host:** Requer o link simbólico `/usr/lib/libtinfo.so.5 -> libtinfo.so.6`.
- **Comando de Compilação Release:**
  ```bash
  JAVA_HOME=/home/everton/.jdks/jdk-17.0.21+9 ./gradlew assembleRelease
  ```
- **Binário Gerado:** [`app/build/outputs/apk/release/HondaAppCenter_A1.apk`](file:///home/everton/Projects/Everton/OpenDroidAuto/app/build/outputs/apk/release/HondaAppCenter_A1.apk).
- **Deploy Automotivo:** Copiar para pendrive FAT32 em `/run/media/everton/EVERTON/ODA/HondaAppCenter_A1.apk`.

---

## 🛡️ 3. Regras de Integração Automotiva

### 🧭 Painel I-MID
1. **Diferença Histórica do Veículo:** O Civic 2012–2014 usava multimídia sem Android (Clarion/Alpine) e desenhava setas de GPS no I-MID via CAN bus proprietário. O Civic EXR 2015/2016 centraliza todas as informações de GPS e mapas na tela touchscreen principal de 7". Não há protocolo de desenho de setas no I-MID nesta geração.
2. **Regra Mandatória:** **NUNCA** defina `modeMgrManager_.setImidConnectStatus(1)`. Chamar status `1` faz o I-MID ficar em tela preta ("Áudio desligado") aguardando dados gráficos que não existem. Mantenha sempre `modeMgrManager_.setImidConnectStatus(0)` para preservar o funcionamento normal do I-MID (odômetro, consumo, LaneWatch, rádio e metadados).

### 🔊 Foco de Áudio & Microfone (Honda ModeMgr & Nvidia Tegra 3 ALSA)
1. **Índices de Foco:**
   - `modeMgrAudioVideoIdx()` = `197`: Áudio + Vídeo do Android Auto.
   - `modeMgrVideoIdx()` = `133`: Apenas Vídeo (quando o carro toca rádio FM/AM, CD ou USB externo).
2. **Sessão de Voz (Google Assistente / Gemini):**
   - Ao iniciar a gravação (`startMicSession`), o foco de áudio DEVE ser solicitado via `modeMgrAudioVideoIdx` (`197`) com `REQUEST_AUDIO` ou `REQUEST_BOTH`. Nunca solicite no índice 133, pois isso gera conflito com o driver ALSA da Nvidia (`NvAudioALSA -16 EBUSY`), travando a captura de voz.
   - Ao parar a gravação (`stopMicSession`), libere com `releaseFocus(197, REQUEST_AUDIO)` e retorne o vídeo via `requestFocus(133, REQUEST_VIDEO)`.
   - Em [`AudioInput.java`](file:///home/everton/Projects/Everton/OpenDroidAuto/app/src/main/java/it/smg/hu/projection/AudioInput.java), garanta que instâncias de `AudioRecord` sejam sempre paradas, liberadas e anuladas (`audioRecord_ = null`) no `stop()` e em blocos de erro para liberar o descritor de hardware do Tegra 3.
3. **Prevenção de Vazamento de Rádio:**
   - Em [`MediaAudioOutput.java`](file:///home/everton/Projects/Everton/OpenDroidAuto/app/src/main/java/it/smg/hu/projection/MediaAudioOutput.java), mantenha o foco de áudio retido durante o evento `suspend()` para não vazar a sintonia do rádio nativo enquanto o assistente fala ou processa.
4. **Pausa Automática:**
   - Ao mudar a fonte física de áudio no rádio (FM `96`, AM `98`, CD `216`, Desligado `255`), envie automaticamente `InputDevice.sendMediaPause()` (keycode 127) para pausar o player no smartphone.

### 🎛️ Comandos de Volante
- O botão **SOURCE** do volante físico emite o código `-65531`. Ele deve mapear para `KEYMAP_BTN_SOURCE_DEFAULT_VALUE = 85` (`TOGGLE_PLAY` / `PLAY_PAUSE`), permitindo alternar Play/Pause sem tirar as mãos do volante.

### 📺 Decodificador de Vídeo por Hardware (OpenMAX IL)
- No JNI e em C++ nativo, os parâmetros de dimensão da janela devem ser passados rigorosamente na ordem `(nativeWindow, width, height)`. Inverter para `(height, width)` gera corrupção de buffer e tela preta.
- A `SurfaceView` da [`PlayerActivity`](file:///home/everton/Projects/Everton/OpenDroidAuto/app/src/main/res/layout/activity_player.xml) não deve conter fundo preto (`android:background`), garantindo a transparência do buffer nativo.
