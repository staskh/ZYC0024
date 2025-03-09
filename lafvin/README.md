# LA043 ESP32 Basic Starter Kit

- [Home page](https://lafvintech.com/pages/tutorials)
- [Manual & code page](https://www.dropbox.com/scl/fo/6znlij3eb23ih4jxcpv2w/AKvB1t9CCUgoVRVtGen8Yrw?rlkey=z84anl0hs940qf9fpl7l8q8q2&e=1&dl=0)

## CP2102 Driver for Mac M2
No need for driver installation on MacOS Sequoia (v 15.0.1) - it is plug&play out of teh box
However, if you need a driver - pick it from [Driver homepage for MacOS](https://www.silabs.com/developer-tools/usb-to-uart-bridge-vcp-drivers)

Drive recognized by MacOS as /dev/cu.usbserial-0001

To validate driver/port functionality , go to https://espressif.github.io/esptool-js/ , click on Console "Start" button followed by "Reset" button
 Expected results:
 ```
I (27) boot: ESP-IDF qa-test-v4.3.3-20220423 2nd stage bootloader
I (27) boot: compile time 11:11:52
I (28) boot: chip revision: 3
I (31) boot_comm: chip revision: 3, min. bootloader chip revision: 0
I (38) boot.esp32: SPI Speed      : 40MHz
I (43) boot.esp32: SPI Mode       : DIO
I (48) boot.esp32: SPI Flash Size : 4MB
I (52) boot: Enabling RNG early entropy source...
```

__Important: Serial Interface must be set for 115000 baud__
