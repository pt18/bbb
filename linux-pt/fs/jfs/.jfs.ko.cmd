cmd_fs/jfs/jfs.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/jfs/jfs.ko fs/jfs/jfs.o fs/jfs/jfs.mod.o
