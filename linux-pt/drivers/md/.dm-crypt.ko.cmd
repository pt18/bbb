cmd_drivers/md/dm-crypt.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/md/dm-crypt.ko drivers/md/dm-crypt.o drivers/md/dm-crypt.mod.o