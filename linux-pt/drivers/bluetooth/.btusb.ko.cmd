cmd_drivers/bluetooth/btusb.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/bluetooth/btusb.ko drivers/bluetooth/btusb.o drivers/bluetooth/btusb.mod.o
