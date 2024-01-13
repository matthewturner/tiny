# ATTiny85

## Install Micronucleus

1. Wire up development board according to numbers (Blank == P5)
1. `git clone git@github.com:micronucleus/micronucleus.git`
1. [Install usb driver](https://github.com/micronucleus/micronucleus/tree/master/windows_driver_installer)
1. [Get AVRDude](https://github.com/avrdudes/avrdude/releases)
1. `Expand-Archive ~\Downloads\avrdude-v7.2-windows-x64.zip -DestinationPath ~/development/avrdude`
1. `cd avrdude`
1. `cp ..\micronucleus\firmware\releases\t85_default.hex`
1. `./avrdude -c usbtiny -p t85 -U flash:w:t85_default.hex -U lfuse:w:0xe1:m -U hfuse:w:0xdf:m -U efuse:w:0xfe:m`
1. Set `upload_protocol = micronucleus` in platformio.ini
1. Upload code

## Upload with programmer

1. Wire up development board according to diagram
1. Set `upload_protocol = usbtiny` in platformio.ini
1. Upload code