cmd_fs/quota/quota_tree.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/quota/quota_tree.ko fs/quota/quota_tree.o fs/quota/quota_tree.mod.o
