# Diretrizes e Regras Operacionais do SmartHome

Este documento estabelece as regras de arquitetura, padrões de código e restrições de segurança que qualquer agente de inteligência artificial deve seguir ao operar no repositório **SmartHome**.

---

## 🏛️ 1. Princípios Gerais da Arquitetura

1. **Heterogeneidade de Plataformas:** O ecossistema abrange arquiteturas e sistemas operacionais diversos:
   - **ESP32** (Xtensa 32-bit / C++ PlatformIO): Cafeteira Espresso.
   - **Intel Edison** (Intel Atom Merrifield x86 32-bit / Poky Yocto Linux): Porteiro e Switch 2.
   - **Raspberry Pi Zero 2 W** (ARMv8 64-bit / Ubuntu Server): Sensor de ambiente TH02 e LCD.
   - **Raspberry Pi 5** (ARM64 / umbrelOS 2.0+): Servidor Umbrel e roteador Tailscale.
   - **Dell Inspiron** (Intel Core i7 x86_64 / Ubuntu Server + CasaOS): NVR Frigate, Nextcloud e FTP.
   - **Predator** (Estação de trabalho local / Linux): Scripts de automação de desktop e microfone.
   - **Honda Civic EXR 2016 Brasil** (Nvidia Tegra 3 T30 32-bit / Android 4.0.4 ICS API 15 / Fujitsu Ten Display Audio): Central multimídia Honda Connect rodando OpenDroidAuto.

2. **Links Clicáveis Obrigatórios:** Todas as referências a arquivos, diretórios e símbolos devem utilizar markdown com o protocolo `file://` (ex: [`server.js`](file:///home/everton/Projects/SmartHome/porteiro/server.js)).

---

## 🛡️ 2. Regras de Segurança e Cuidados Específicos por Dispositivo

### ☕ Cafeteira Espresso (`cafeteira/`)
- **Tensão Perigosa:** A máquina lida com corrente alternada (110V/220V) para resistências de aquecimento e bomba vibratória Ulka.
- **Segurança da Caldeira:** Nunca desative as proteções térmicas de software ou os limites máximos de temperatura no PID (`MAX_TEMP = 105°C` para extração).
- **Proteção da Bomba:** O tempo máximo de acionamento contínuo da bomba nunca deve ultrapassar 90 segundos para evitar queima da bobina.
- **Preservação de Calibração:** Nunca altere as constantes PID ou os fatores de calibração volumétrica do sensor de fluxo sem confirmação do usuário.

### 🚪 Intel Edison, Porteiro e Switch 2 (`porteiro/`, `switch2/`, `edison/`)
- **Arquitetura 32-bit:** O Intel Edison roda binários x86 de 32-bit. Qualquer módulo de kernel ou binário nativo deve ser construído dentro do container Docker 32-bit (`porteiro/kernel_build/Dockerfile`).
- **Chave Física USB (SW1):** Lembre-se de que a comutação de hardware entre Host (Porta USB-A grande) e Device (porta micro-USB) depende da chave seletora física SW1.
- **Porta Serial de Emergência:** Se o Edison perder conectividade IP ou o `connman` travar, use os scripts em [`edison/`](file:///home/everton/Projects/SmartHome/edison/README.md) via `/dev/ttyUSB0` (115200 8N1).
- **Gerenciamento de Módulos:** Os drivers UVC e áudio USB são carregados sob demanda ou via `/etc/modules-load.d/porteiro.conf`.

### 🛡️ Servidor Umbrel (`umbrel/`)
- **Particionamento A/B Rugix:** A partição raiz (`/`) do umbrelOS é volátil e sofre overlay a cada atualização de sistema operacional. **Nunca** crie arquivos permanentes diretamente em `/etc` ou `/usr` no Umbrel sem garantir a injeção via [`umbrel/scripts/pre-start`](file:///home/everton/Projects/SmartHome/umbrel/scripts/pre-start).
- **Subnet Router Tailscale:** O Umbrel anuncia a rota para a sub-rede `192.168.15.0/24`. Tenha cuidado ao alterar configurações do `tailscaled.default` ou `99-tailscale.conf`.

### 📹 Câmeras e Frigate (`cameras/`, `inspiron/`)
- **Preservação do Armazenamento:** Todas as gravações contínuas, clipes e dados volumosos do Frigate **devem** ser gravados em `/mnt/storage` (HD Toshiba de 1TB), nunca na raiz `/` (SSD mSATA de 32GB).
- **Limpeza de Subprocessos FFmpeg:** Ao implementar ou modificar streamers Python (como [`gate_streamer.py`](file:///home/everton/Projects/SmartHome/cameras/gate_streamer.py)), garanta o fechamento estrito de streams com `proc.terminate()`, `proc.kill()` e `proc.wait(timeout=2.0)` para evitar o acúmulo de processos zumbis de FFmpeg que saturem a CPU do Inspiron.
- **Nomes Dinâmicos:** As câmeras de segurança devem ser referenciadas sempre pelo seu hostname dinâmico (`*.camera.lan`), pois seus endereços IP são obtidos por DHCP e atualizados via DNSmasq.

### 🌡️ Raspberry Pi Zero 2 W (`pi2w/`)
- **Consumo de Memória:** O pi2w possui apenas 512 MB de RAM compartilhada. Mantenha os daemons em Python usando apenas bibliotecas leves (biblioteca padrão quando possível, como em [`pi_dashboard.py`](file:///home/everton/Projects/SmartHome/pi2w/pi_dashboard.py)).
- **Lógica de Failover do Wi-Fi:** Não quebre a alternância do script [`wifi_selector.sh`](file:///home/everton/Projects/SmartHome/pi2w/wifi_selector.sh) entre o inversor solar (`AP_2311308326`) e a rede da casa (`Home-Office`).

### 🚗 Honda Civic EXR 2016 Brasil & OpenDroidAuto ([`OpenDroidAuto/`](file:///home/everton/Projects/Everton/OpenDroidAuto))
- **Hardware da Central Multimídia:** Fujitsu Ten Display Audio de 7", SoC Nvidia Tegra 3 (T30) Quad-Core ARM Cortex-A9 32-bit (`armeabi-v7a`), Android 4.0.4 (Ice Cream Sandwich, API 15).
- **Conexão Sem Fio (Adaptador Wi-Fi Dongle):** O usuário utiliza um adaptador sem fio de Android Auto (Wi-Fi dongle) conectado à porta USB da central. O smartphone (Xiaomi 12T Pro) comunica-se via Wi-Fi (5GHz/2.4GHz) com o dongle, e o dongle conecta-se via USB (AOAP) à central. Toda análise de tráfego, latência de áudio, interferência RF e conexões Bluetooth com a central deve sempre considerar este adaptador sem fio.
- **Ambiente de Build Estrito:** O projeto requer rigorosamente **JDK 17** (`JAVA_HOME=/home/everton/.jdks/jdk-17.0.21+9`) e Android NDK r17c (`17.2.4988734`). O Gradle 8.11 com Java 7 target falha no OpenJDK 25.
- **Comportamento do I-MID (Painel Superior de Instrumentos):**
  - O Civic EXR 2015/2016 Brasil utiliza a central Honda Connect de 7" que centraliza GPS e mapas na tela touchscreen principal. Diferente do Civic 2012–2014 (Clarion/Alpine sem Android que possuía protocolo proprietário para setas no I-MID), o Civic 2015/2016 **não** possui protocolo de desenho de setas via ModeMgr.
  - **Regra Mandatória do I-MID:** NUNCA chame `modeMgrManager_.setImidConnectStatus(1)`. Chamar status `1` faz a ECU do carro bloquear a tela do I-MID ("tela preta" aguardando telemetria inexistente). Mantenha estritamente `modeMgrManager_.setImidConnectStatus(0)` para permitir que o I-MID exiba nativamente odômetro, LaneWatch, trip computer e metadados de áudio (título/artista via Bluetooth ou rádio).
- **Gerenciamento de Foco de Áudio (Honda ModeMgr):**
  - O ModeMgr da central Fujitsu Ten utiliza índices específicos:
    - `modeMgrAudioVideoIdx()` = `197`: Requisição de ÁUDIO + VÍDEO (quando o Android Auto está ativo com áudio/mídia ou sessão de microfone).
    - `modeMgrVideoIdx()` = `214`: Requisição de VÍDEO APENAS via `MODEMGR_LADDR_3RD_PARTY_NAVI` (quando a fonte de áudio do carro é rádio FM/AM, CD ou USB e o AA projeta em segundo plano na tela). NUNCA usar índice 133 (`VOICETAG`), pois ele envia o comando CAN DUET `requestDuetCmdPowerOff` apagando o cabeçalho do i-MID com a mensagem "Áudio desligado".
  - **Microfone e Google Assistente / Gemini:**
    - Ao abrir o microfone (`startMicSession`), o foco DEVE ser solicitado via `modeMgrAudioVideoIdx` (`197`) com `REQUEST_AUDIO` ou `REQUEST_BOTH`. Nunca solicitar no índice 133 ou 214, pois isso corrompe o driver ALSA da Nvidia (`NvAudioALSA: err -16 EBUSY`), travando o microfone.
    - Ao fechar o microfone (`stopMicSession`), o foco de áudio deve ser liberado via `releaseFocus(197, REQUEST_AUDIO)` e restaurado o vídeo via `requestFocus(214, REQUEST_VIDEO)`.
    - Em [`AudioInput.java`](file:///home/everton/Projects/Everton/OpenDroidAuto/app/src/main/java/it/smg/hu/projection/AudioInput.java), garanta que instâncias de `AudioRecord` sejam sempre paradas, liberadas e anuladas (`audioRecord_ = null`) no `stop()` e em blocos de exceção para liberar o descritor de hardware do Tegra 3.
- **Isolamento de Áudio e Vazamento de Rádio:**
  - Em [`MediaAudioOutput.java`](file:///home/everton/Projects/Everton/OpenDroidAuto/app/src/main/java/it/smg/hu/projection/MediaAudioOutput.java), nunca invoque `releaseAudioFocus()` no evento `suspend()` do stream de mídia, pois isso faz o rádio FM/AM nativo do carro vazar em segundo plano durante a fala do Google Assistente / Gemini.
  - Ao detectar troca da fonte física de áudio no painel do carro para outra fonte (FM `96`, AM `98`, CD `216`, etc.) ou desligamento do som no botão Power (`255`) em `handleAudioAddressChanged`:
    - Envie `InputDevice.sendMediaPause()` (keycode 127) para pausar automaticamente o player (Spotify/YT Music) no smartphone e registre `wasMediaPlayingBeforeSourceSwitch_`.
    - Chame `notifySteeringMenuDispMode(0)` para liberar os botões de avanço/retrocesso do volante para a rádio FM nativa.
    - Ao retornar para o Bluetooth (`197`), se a música estava tocando antes, retome automaticamente via `InputDevice.sendMediaPlay()` após 800ms.
- **Mapeamento de Teclas do Volante:**
  - O botão físico **SOURCE** do volante emite o scan code `-65531`.
  - No menu de Mapeamento de Teclas do Volante, o usuário pode configurar a ação da tecla SOURCE entre:
    - `CHANGE_AUDIO_SOURCE = 999` (Padrão): Aciona `startAudioLauncher()` na central para abrir o seletor nativo de fontes de áudio do carro.
    - `TOGGLE_PLAY = 85`: Alterna entre Play e Pause no Android Auto.
    - `PLAY = 126` / `PAUSE = 127`: Ações explícitas de reprodução/pausa.
- **Decodificador de Vídeo por Hardware (OpenMAX IL):**
  - A biblioteca nativa `libomxvideocodec-jni.so` decodifica H.264 por hardware no SoC Nvidia Tegra 3.
  - As dimensões passadas para a `ANativeWindow` devem seguir estritamente a ordem `(width, height)`. Inversões causam tela preta ou corrupção de buffer na EGL.
  - A `SurfaceView` da [`PlayerActivity`](file:///home/everton/Projects/Everton/OpenDroidAuto/app/src/main/java/it/smg/hu/ui/PlayerActivity.java) não deve possuir `android:background="#000000"`, para não sobrepor o buffer de vídeo nativo gerado pelo decoder.
- **Deploy e Inicialização:**
  - A inicialização via USB no [`UsbReceiver.java`](file:///home/everton/Projects/Everton/OpenDroidAuto/app/src/main/java/it/smg/hu/manager/UsbReceiver.java) executa diretamente a `PlayerActivity` ao detectar o smartphone, sem requisição de popups de confirmação intrusivos.
  - Geração do APK final: `./gradlew assembleRelease` gerando [`HondaAppCenter_A1.apk`](file:///run/media/everton/EVERTON/ODA/HondaAppCenter_A1.apk) com otimização R8/ProGuard e flags `-O3` no NDK.
  - **Regra Mandatória de Git & Deploy:** Sempre que um APK for gerado, execute obrigatoriamente `git commit` das alterações e `git push origin <branch>` para o GitHub (`git@github.com:vieiraEverton/OpenDroidAuto.git`), mantendo as branches sincronizadas.
- **Backlog de Features Futuras (Não implementar no momento):**
  - **Debounce em `handleAudioAddressChanged`:** Adicionar filtro e debounce de 1.5–2.0s para evitar pausas falsas (`sendMediaPause`) quando o Bluetooth sofrer transientes rápidos de status `255`.
  - **Buffer Resiliente no `AudioCodec`:** Expandir a fila `ArrayBlockingQueue` de 32 para 64/128 buffers para tolerar jitter do adaptador Wi-Fi.
  - **I-MID em Fontes Nativas (FM/AM/CD):** Resolver tela preta com mensagem "Áudio desligado" no I-MID quando a fonte de áudio for trocada para FM (`96`), AM (`98`) ou CD (`216`) enquanto o ODA projeta vídeo. O índice 133 (`VOICETAG`) inibe a interface de mídia do I-MID; investigar índices de vídeo alternativos (ex: `214` ou `220`), liberação do canal de áudio 197 no ModeMgr e sincronização de fonte no `StatusBarExManager`.

---

## 💻 3. Padrões de Código e Versões

- **Python:** Use `python3` (versão 3.10+). Não introduza dependências externas sem verificar a viabilidade no dispositivo de destino.
- **Shell Scripts:** Use sempre `set -e` em scripts de instalação e deploy críticos (ex: [`deploy.sh`](file:///home/everton/Projects/SmartHome/ha/deploy.sh)).
- **C++ (Arduino/PlatformIO):** Siga o padrão C++17 e mantenha código não-bloqueante no `loop()` principal (evite chamadas excessivas a `delay()`).
- **Node.js:** Versão 18+ ou 20+, priorizando chamadas assíncronas com tratamento adequado de erros e reconexão WebSocket/MQTT.
- **Java & Android (OpenDroidAuto):** JDK 17 obrigatório (`JAVA_HOME=/home/everton/.jdks/jdk-17.0.21+9`). NDK r17c (`17.2.4988734`) com ABI `armeabi-v7a`. Compatibilidade com API 15 (Android 4.0.4 ICS).
