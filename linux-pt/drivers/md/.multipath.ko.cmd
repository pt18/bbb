cmd_drivers/md/multipath.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/md/multipath.ko drivers/md/multipath.o drivers/md/multipath.mod.o
