cmd_drivers/usb/misc/isight_firmware.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/usb/misc/isight_firmware.ko drivers/usb/misc/isight_firmware.o drivers/usb/misc/isight_firmware.mod.o