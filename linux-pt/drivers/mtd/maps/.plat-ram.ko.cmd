cmd_drivers/mtd/maps/plat-ram.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/mtd/maps/plat-ram.ko drivers/mtd/maps/plat-ram.o drivers/mtd/maps/plat-ram.mod.o
