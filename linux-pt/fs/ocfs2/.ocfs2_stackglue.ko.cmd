cmd_fs/ocfs2/ocfs2_stackglue.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/ocfs2/ocfs2_stackglue.ko fs/ocfs2/ocfs2_stackglue.o fs/ocfs2/ocfs2_stackglue.mod.o
