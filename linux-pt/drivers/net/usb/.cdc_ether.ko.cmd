cmd_drivers/net/usb/cdc_ether.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/net/usb/cdc_ether.ko drivers/net/usb/cdc_ether.o drivers/net/usb/cdc_ether.mod.o