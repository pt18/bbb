cmd_drivers/md/dm-multipath.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/md/dm-multipath.ko drivers/md/dm-multipath.o drivers/md/dm-multipath.mod.o
