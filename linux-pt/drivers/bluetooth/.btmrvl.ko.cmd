cmd_drivers/bluetooth/btmrvl.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/bluetooth/btmrvl.ko drivers/bluetooth/btmrvl.o drivers/bluetooth/btmrvl.mod.o