- Fix: armv6l packages overwrote aarch64 packages because they had the same name (#1082) - v21 🆕
- Flatbuffers: search for user LUTs also in bin dir - v21 🆕
- Remove support for old 50MB LUT. Use ZSTD instead - v21 🆕
- Update SSL certificates to hyperhdr.eu - v21 🆕
- Add support for Home Assistant lights (#1014) - v21beta2 🆕
- Update language file's (#1026, #1017) thanks @AstaRom - v21beta2 🆕
- Implement zigbee2mqtt protocol (#1024) - v21beta2 🆕
- Add support for ZSTD compression for all LUT files (#1062) - v21beta2 🆕
- Fix CodeQL script (#1058) - v21beta2 🆕
- Lightning-fast builds: use native Github Action ARM runners (#1057) - v21beta2 🆕
- Windows: fix suspend & power off handling (#1039) - v21beta2 🆕
- Pipewire drm workaround fix (#1029) thanks @dankmolot - v21beta2 🆕
- Feature to re-order displays in multi-display mode (#1023) - v21beta2 🆕
- Automatic tone mapping (#998) - v21beta1 🆕
- Add Ubuntu 24.10 and Fedora 41 (#1001) - v21beta1 🆕
- Add support for "unicam image" RPi HDMI capture card and UYVY format (#889) - v21beta1 🆕
- Breaking change: remove LUT from installer and create it dynamically (#994) - v21beta1 🆕
- Fix macOS 15 dark theme menu icons (#988) - v21beta1 🆕
- Add P010 HDR10 video format support (2024-11-24) (#968) - v21beta1 🆕
- DirectX multi-monitor support (#966) - v21beta1 🆕
- macOS 15 sequoia: migrate to ScreenCaptureKit (#984) - v21beta1 🆕
- Add Skydimo "support" (#985) - v21beta1 🆕
- New LUT calibration based on mp4 test videos (part I) (#896) - v21beta1 🆕
- feat: updated rpi_ws281x submodule, thanks @andreasvikke (#974) - v21beta1 🆕
- DX grabber: stick to user specified device selection (#961) - v21beta1 🆕
- Fix LED colors adjustments by configuration name (#956) - v21beta1 🆕
- Add autoresume feature for the macOS software grabber (#879) - v21beta1 🆕
- Add NV12 image format support for flatbuffers (#920) - v21beta1 🆕
- Update language file's Thanks @AstaRom (#883, #923, #998) - v21beta1 🆕
- Update flatbuffers to v24.3.25 (#875) - v21beta1 🆕
- Add cache_cleaner for Github Action (#910) - v21beta1 🆕
- New build.sh script for the HyperHDR build process (#904) - v21beta1 🆕
- Remove Alsa libs from CMake recipe - v21beta1 🆕
- Remove more unnecessary libraries from installers - v21beta1 🆕
- Remove libasound from installers - v21beta1 🆕
- Fix restoring calibration settings (#874) - v21beta1 🆕
- Reorganize HyperHDR libs (#887) - v21beta1 🆕
- Fix macOS image alignment (#838) - v21beta1 🆕
- Remove hyperhdr-remote app. Reason: #856 - v21beta1 🆕
- Refactoring of the FlatBuffers client and server (#880) - v21beta1 🆕
- Remove mbedtls. Use OpenSSL (#877) - v21beta1 🆕
- Removal of QT SQL. Migrate to the SQLite library. (#872) - v21beta1 🆕
- New smoothing option for sound effects, fix ArchLinux installer, refactoring of the smoothing module and music effects (#871) - v21beta1 🆕
- Removal of QT D-Bus, switch to sdbus-cpp (#864) - v21beta1 🆕
- Dependency reductions: removal of heavy QT Gui lib (#861) - v21beta1 🆕
- Fix DirectX capturing after new Systray changes - v21beta1 🆕
- New independed systray. Dependency reductions thanks to removal of QWidget (#852) - v21beta1 🆕
- Fix: lut calibration for grabberless builds (#840) - v21beta1 🆕
- Fix: close LED device on correct Thread (#803) - v21beta1 🆕
- Fedora uses xz as the package name, not xz-utils #771 Thanks @hsmalley (v20 beta2)
- Fix LUT loading bug to reduce memory usage by 96MB #766 (v20 beta2)
- Fix background music effect #761 (v20 beta2)
- Fix typo #762 Thanks @laurens94 (v20 beta2)
- Yeelight: Wizard now supports more models, workaround for music-mode reset, auto-resume support #750 Thanks @ratawhisk (v20 beta2)
- Fix verbose command line option #737 (v20 beta2)
- Add native build for Apple M1 / M2 (arm64) architecture #973 (v20 beta2)
- New features: disable LEDs/components on startup #737 (v20 beta2)
- New features: stop processing when user has locked the system #737 (v20 beta2)
- Force HyperSerial detection #732 Thanks @alex-013 (v20 beta2)
- Fix Linux DBus sleep/wakeup handler (v20 beta2)
- Fix pipewire grabber for non-contiguous DMA memory & EGL #711 Thanks @Mic92 (v20 beta2)
- Update build scripts and include Ubuntu 24.04 LTS (v20 beta2)
- Fixes for v20beta1 #705 (v20 beta2)
- Refactoring. Migration to C++ smart pointers (v20 beta)
- Pixel and vertex shaders hardware acceleration for DX11 Windows grabber (v20 beta)
- Unified LED driver smoothing and clocking for better linear transition (v20 beta)
- WLED: migrate to Audio-Reactive-Led-Strip protocol. Overcome 490 LEDs limit (v20 beta)
- Automatic DB backup before upgrading (v20 beta)
- support for HyperSPI on Pico rp2040 boards (v20 beta)
- MQTT: auto-resume broken connection (v20 beta)
- MQTT: support for multiple JSON API commands in one MQTT request (v20 beta)
- ArtNet driver: toggle to prevent pixel color data split across multiple universes (v20 beta)
- Add video buffer memory caching to Pipewire grabber (v20 beta)
- Fix typo in LED strip name #670 Thanks @fluchfux (v20 beta)
- Pipewire DMA & EGL hardware support (Wayland/x11 grabber) #556 #556 (v20 beta)
- Upgrade Fedora 38 to 39, Ubuntu 23.04 to 23.10 #667 (v20 beta)
- Colorized logs #640 (v20 beta)
- Fix macOS build #638 #671 #672 (v20 beta)
- Update language file's. Thanks @AstaRom #505 #538 #571 #617 #710 #716 #723 (v20 beta)
- Make bonjour use logging utilities. Thanks @nurikk #529 (v20 beta)
- New interface: removed ancient Font Awesome 4 (so 2017...) Migrate to SVG: Bootstrap Icons and Google Material Icons/Symbols #605 (v20 beta)
- New device discovery service #605 (v20 beta)
- Stability improvements & bug fixing #605 (v20 beta)
- Fix QT5.15 issue when building on Windows #605 (v20 beta)
- Add new effect: Rainbow Waves #607 (v20 beta)
- MQTT: hostname address resolver. Thanks @lougovsk #586 (v20 beta)
- V4L: allow setting of V4L device input, fixes #537. Thanks @Thinner77 #540 (v20 beta)  
- Update flatbuffers to v23.5.26 #596 (v20 beta)  
- Pause the USB grabber when all LEDs are off to reduce load #608 (v20 beta) 
- Add support for HD108 led strip, 16/48bits colors #527 (v20 beta)  
- Use optional system libs for compiling #541 (v20 beta)  
- Update mbedtls to 3.4.0 #589 (v20 beta)  
- Add Ubuntu support to HyperHDR and Github Pages APT repository #522 (v20 beta)
- New JsonAPI method to calculate average color of selected instance #611 (v20 beta)
- Workaround for critical Rpi udev bug affecting serial ports #583 (v20 beta)  
- Add Arch Linux support #520 (v20 beta)  
- Fix chrome/edge fullscreen detection #519 (v20 beta)  
- Add automatic LUT downloader & installer #568 (v20 beta)  
- Allow LUT calibration when no USB grabber is present #518 (v20 beta)  
- Live update WLED/udpraw LEDs number #564 (v20 beta) 
- Add support for Raspberry Pi Pico (Rp2040) HyperSerialPico #560 (v20 beta)  
- Do not use TurboJPEG for RGB during calibration #508 (v20 beta)  
- Update Github actions/checkout@v3 #403 (v20 beta) 
- glibc requirements for DEB installer #402 (v20 beta)  
- Remove folders nesting #363 (v20 beta)  
- New JSON API method to update smoothing parameters #352 (v20 beta)  
- Update Github actions/download@v3 #372 (v20 beta)  
- Remove depraciated ::set-output from Github Action #390 (v20 beta)  
- Upgrade Bootstrap to 5.2.3 / improved 'video live preview' on smartphones #336 (v20 beta)  
- LED designer context menu to disable, identify or customize LED position and size etc   
- Added Philips Hue Entertainment API 2. Support for Hue gradients (thanks  @gibahjoe)  
- Save/restore WLED state and set max brightness at startup  
- Support for precompiled headers  
- Colored cmake output  
- Adalight: auto-resume, resume the device if failed  
- Adalight: ESP8266/ESP32 auto-discovery, 'auto' searches for known ESP  
- Adalight: ESP8266/ESP32 handshake to properly initialize the ESP device and read statistics  
- Add statistics about dropped LED frames  
- Add support for utv007 / Linux  
- Modifiable SPI path with device auto-detection  
- Flatbuffers: selectable custom LUT files via API  
- Overall performance without tone mapping for USB grabbers improved x10 (MJPEG) and x3 (YUV) over Hyperion NG 2.0.0.8A thanks to optimization & using of multi-threading
- Direct support for USB grabbers under Windows 10, Linux and macOS (really fast & of course multi-threaded)
- Support for software screen grabbers: DirectX11, CoreGraphics, X11
- New software grabber for Linux: Wayland (pipewire/portal) which also means support for **Ubuntu 22.04 LTS**
- Registering HyperHDR services with the MQTT broker
- Frame Buffer software screen grabber (Linux)
- Reworked network discovery service and added Windows support
- Improved Philips Hue wizard
- WLED Configuration Wizard can discover WLED devices on the network
- Protocol buffers HDR tone mapping
- Replaced protobuf with a lightweight nanopb library
- System event support: hibernation/sleep/wake up/resume
- Added WLED auto-resume initialization and improved existing Philips Hue auto-resume feature
- Wayland grabber: support for pipewire/portal version 4 protocol persistent authentication
- [New fully automatic LUT calibration for HDR/SDR/YUV](https://www.hyperhdr.eu/2022/04/usb-grabbers-hdr-to-sdr-quality-test.html)
- 30% improved performance for MJPEG HDR mode
- Add white channel calibration for RGBW led strips and latest HyperSerialEsp8266/HyperSerialESP32/HyperSPI ([Adalight](https://i.postimg.cc/hv9366VD/calib1.jpg) [HyperSPI](https://i.postimg.cc/kGdTQszk/calib2.jpg))
- New dynamic video cache buffers (improved performance, fixes [#142](https://github.com/awawa-dev/HyperHDR/issues/142))
- Performance information panel in the overview tab
    - CPU performance and RAM usage (excluding Apple M1)
    - CPU temperature reading (Linux only, when sensor is present)
    - Under-voltage detection (Raspberry Pi OS only)
    - USB grabber performance (shows framerate and latency)
    - Instance input images to LED colors performance
    - LED device output performance
- New JSON API function to control USB grabber: brightness, contrast, saturation, hue
- USB grabber latency benchmark ([link](https://www.hyperhdr.eu/2021/10/usb-grabbers-grand-latency-test-part-i.html))
- HDR tone mapping for flatbuffers ([PR #215](https://github.com/awawa-dev/HyperHDR/pull/215) thanks @chbartsch) and protobuf
- Dynamic LED layout resize on container size changed
- Improved and refactored LED devices model and communication
- Flatbuffers/Protobuf: HDR tone mapping can use an alternative filename: *flat_lut_lin_tables.3d*
- FlatBuffers: add support for high performance local sockets ([link](https://github.com/awawa-dev/HyperHDR/commit/1100093068196a53eff5f856f0eaaf8e43ca229f))
- The new build scheme allows grabber-less configuration and the use of external toolchains
- Add popular 'UDP raw' (WLED compatible) receiver for HyperHDR ([link1](https://i.postimg.cc/RV4PqPct/udpraw.jpg) [link2](https://github.com/awawa-dev/HyperHDR/commit/5fb1be1c4bdbc84becfd964a08cb106482b6c4e5))
- User interface upgraded to modern standards (Bootstrap 5)
- Improved LUT table for SDR(yuv) and HDR video streams
- Support for CEC (turn ON/OFF grabbers, remote keys to command HDR tone mapping)
- Support for my new [HyperSPI](https://github.com/awawa-dev/HyperSPI) project for Rpi. Fastest possible cable solution for almost every generic ESP8266/ESP32 LED driver
- Fork of WLED with USB serial port AWA protocol at @2000000 speed for ESP32 & ESP8266 and almost all types of LED strips: [HyperSerialWLED](https://github.com/awawa-dev/HyperSerialWLED)
- Support for WS281x RGB, SK6812 RGBW, APA102 like LED strips using USB serial port AWA protocol for ESP8266 at @2000000 baud with data integrity check: [HyperSerialEsp8266](https://github.com/awawa-dev/HyperSerialEsp8266)
- Support for WS281x RGB, SK6812 RGBW, APA102 like LED strips using USB serial port AWA protocol for ESP32 at @2000000 baud with data integrity check: [HyperSerialESP32](https://github.com/awawa-dev/HyperSerialESP32)
- Automatic signal detection with smart learning capability for USB grabbers
- Re-implemented backup import / export functions for ALL instances
- New video stream crop method in JSON API and GET multi-command support
- Auto-resume option for the USB grabber
- JSON API documentation in a form of live playground in 'Advanced' tab
- List of available COM ports for the adalight driver
- Fix: in specific cases some devices could not react to the 'no video signal' event when it's triggered
- New installer for Raspberry Pi 3 & 4 64bit OS (AARCH64), faster up to 30% over 32bit OS armv7l version
- Fix for WLED new network protocol
- LED grouping *aka* PC mode *aka* gradient mode, can help with eye fatigue when used with the monitor, each LED in the group has same average color
- Add timeout for the anti-flickering filter
- Panel for easy video resolution & refresh mode selection in the grabber section
- Support for QT6.2
- Lower CPU usage when automatic signal detection triggers 'no-signal'
- Fixed power saving issue in macOS version
- Audio visualization effects (Windows, macOS and Linux)
- Support for YUV, MJPEG, RGB24, I420, NV12 and XRGB encoding
- Overall (_'Quarter of frame'_ in the USB grabber section) and per an instance (_'Sparse processing'_ in the _Processing_ tab) options to control quality/performance balance.
- Hardware brightness, contrast, saturation, hue control for USB grabbers (Windows and Linux)
- Philips Hue driver (inc. Entertainment API) partially rewritten and working. Customized new options for powering on/off the lamps
- New option to choose video encoding format (for multi format grabbers for ex. Ezcap 269, MS2109 clones)
- special LUT table dedicated for Ezcap 320 grabber available in the download section
- Add configurable Signal Threshold Counter option for signal detection
- LUT table tone mapping, mainly for HDR correction and fast color space transformation (YUV).
- New advanced & weighted advanced LED mean color algorithm in _Image&#8594;LED mapping_
- Improved backlight algorithm to minimize leds flickering on the dark scenes (configurable in the _Smoothing_)
- Add old style color calibration (HSL) using luminance, saturation et.
- Build for newer Raspbian Buster. It's a complete migration from older Raspbian Stretch
- Option for _hyperhdr-remote_, JSON API and web GUI remote to turn on/off HDR tone mapping
- Option for luminescence & saturation for hyperhdr-remote
- Ready to write SD images of HyperHDR
- Fix for SK9822 leds on SPI (aka fake APA102)
- Windows, macOS DMG and Linux DEB & RPM installers contain default LUT table
