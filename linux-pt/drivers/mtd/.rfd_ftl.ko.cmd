cmd_drivers/mtd/rfd_ftl.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/mtd/rfd_ftl.ko drivers/mtd/rfd_ftl.o drivers/mtd/rfd_ftl.mod.o