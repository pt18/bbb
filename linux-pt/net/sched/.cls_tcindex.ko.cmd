cmd_net/sched/cls_tcindex.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/sched/cls_tcindex.ko net/sched/cls_tcindex.o net/sched/cls_tcindex.mod.o