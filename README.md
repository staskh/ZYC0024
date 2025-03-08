# ESP32 Camera Robot Car Kit For Arduino Starter Kit

## Vendor homepage
https://tscinbuny.com/products/tscinbuny-esp32-robot-for-arduino-starter-kit-4wd-with-antenna-esp32-wifi-camera-module-car-kit-programmable-robot-educational-set-with-codes

SKU: ZYC0024

Assembly video: http://www.zhiyi.ltd/xiazai/Assembly_ZYC0024-EN.mp4

Vendor software (original location) - includes all other models

https://www.dropbox.com/scl/fo/ai2x0e1van34yfokd5ngr/h?rlkey=pgu0nurt40z5d0vs6wj1el8vi&e=2&st=65tjwo32&dl=0

## Hardware

### ESP32 Board
ESP32-CAM compatible with ESP32-WROVER 

Datasheet: https://media.digikey.com/pdf/Data%20Sheets/DFRobot%20PDFs/DFR0602_Web.pdf
https://www.handsontec.com/dataspecs/module/ESP32-CAM.pdf 

Software: https://github.com/espressif/esp32-camera

### Extension Board
USB to Serial Port chip CH340 : Datasheet https://www.wch-ic.com/downloads/CH340DS1_PDF.html
requires driver installation, see CH340 driver section below


### Powertrain control
Motor drive module L298N

Detailed description at https://howtomechatronics.com/tutorials/arduino/arduino-dc-motor-control-tutorial-l298n-pwm-h-bridge/ 


# Setup for MacOs
Configuration:
- Apple M2 chip
- Sequoia 15.0.1

## CH340 driver
Note: driver provided in vendor DropBox didn't work for me. Probably becouse is it not compiled for M2 chip.
Instead I used a newer version (1.8) of driver directly from chip vendor website:
https://www.wch-ic.com/downloads/CH34XSER_MAC_ZIP.html
It includes user space driver for CH340C USB->Serial port

install CH34xVCPDriver.dmg 


driver extension

to check :
System Settings->General->Login Items & Extensions->Driver extensions


verify that it is working:
In terminal
```ls /dev/cu.wch*```

check that it communicate with ESP32 board
https://espressif.github.io/esptool-js/ 

Set baundrate to 115200 and connect in Program section

Expected result:
```
esptool.js
Serial port WebSerial VendorID 0x1a86 ProductID 0x7523
Connecting...
Detecting chip type... ESP32
Chip is ESP32-D0WD-V3 (revision 3)
Features: Wi-Fi, BT, Dual Core, 240MHz, VRef calibration in efuse, Coding Scheme None
Crystal is 40MHz
MAC: 14:2b:2f:d7:86:f0
Uploading stub...
Running stub...
Stub running...
```

- [Discussion on MacOS CH340 driver installation](https://github.com/WCHSoftGroup/ch34xser_macos/issues/27)
- [CH340 Driver Home page](https://www.wch-ic.com/downloads/CH34XSER_MAC_ZIP.html)
- [CH340 GitHub page](https://github.com/WCHSoftGroup/ch34xser_macos)

## Uploading firmware to ESP32
Two important points to remember:
- Set upload speed for 115200
- Set Serial monitor 115200 (garbage otherwise)

# Similar projects
- [ESP32-SMART-CAR-KIT-ZYC0024-](https://github.com/LevyMatan/ESP32-SMART-CAR-KIT-ZYC0024-)
- [ESP32-CAM - A.I. Thinker](https://github.com/raphaelbs/esp32-cam-ai-thinker)

# Useful links
- [ESP32-CAM Video Streaming and Face Recognition with Arduino IDE](https://electropeak.com/learn/esp32-cam-video-streaming-and-face-recognition-with-arduino-ide/)
- [Getting Started with the ESP32 Development Board](https://electropeak.com/learn/getting-started-with-the-esp32-development-board/)
- [Arduino Robot Car Wireless Control using HC-05 Bluetooth, NRF24L01 and HC-12 Transceiver Modules](https://howtomechatronics.com/tutorials/arduino/arduino-robot-car-wireless-control-using-hc-05-bluetooth-nrf24l01-and-hc-12-transceiver-modules/)
- [Getting Started with VS Code and PlatformIO IDE for ESP32](https://randomnerdtutorials.com/vs-code-platformio-ide-esp32-esp8266-arduino/)
- [ESP32-CAM Pan and Tilt Video Streaming Web Server (2 Axis)](https://randomnerdtutorials.com/esp32-cam-pan-and-tilt-2-axis/)
