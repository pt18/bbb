cmd_drivers/usb/serial/keyspan.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/usb/serial/keyspan.ko drivers/usb/serial/keyspan.o drivers/usb/serial/keyspan.mod.o
