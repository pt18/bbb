cmd_drivers/usb/misc/ldusb.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/usb/misc/ldusb.ko drivers/usb/misc/ldusb.o drivers/usb/misc/ldusb.mod.o
