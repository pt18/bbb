cmd_drivers/net/usb/kalmia.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/net/usb/kalmia.ko drivers/net/usb/kalmia.o drivers/net/usb/kalmia.mod.o
