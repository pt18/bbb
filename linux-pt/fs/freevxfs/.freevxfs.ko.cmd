cmd_fs/freevxfs/freevxfs.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/freevxfs/freevxfs.ko fs/freevxfs/freevxfs.o fs/freevxfs/freevxfs.mod.o
