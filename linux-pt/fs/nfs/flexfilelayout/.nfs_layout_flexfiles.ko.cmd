cmd_fs/nfs/flexfilelayout/nfs_layout_flexfiles.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/nfs/flexfilelayout/nfs_layout_flexfiles.ko fs/nfs/flexfilelayout/nfs_layout_flexfiles.o fs/nfs/flexfilelayout/nfs_layout_flexfiles.mod.o