cmd_drivers/misc/ds1682.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/misc/ds1682.ko drivers/misc/ds1682.o drivers/misc/ds1682.mod.o