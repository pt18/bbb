cmd_drivers/block/brd.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/block/brd.ko drivers/block/brd.o drivers/block/brd.mod.o
