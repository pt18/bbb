cmd_drivers/block/null_blk.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/block/null_blk.ko drivers/block/null_blk.o drivers/block/null_blk.mod.o