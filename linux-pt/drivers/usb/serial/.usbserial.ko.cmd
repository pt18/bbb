cmd_drivers/usb/serial/usbserial.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/usb/serial/usbserial.ko drivers/usb/serial/usbserial.o drivers/usb/serial/usbserial.mod.o