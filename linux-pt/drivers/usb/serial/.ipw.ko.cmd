cmd_drivers/usb/serial/ipw.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/usb/serial/ipw.ko drivers/usb/serial/ipw.o drivers/usb/serial/ipw.mod.o