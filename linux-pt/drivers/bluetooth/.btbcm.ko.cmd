cmd_drivers/bluetooth/btbcm.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/bluetooth/btbcm.ko drivers/bluetooth/btbcm.o drivers/bluetooth/btbcm.mod.o
