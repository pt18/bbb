cmd_net/sched/em_cmp.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/sched/em_cmp.ko net/sched/em_cmp.o net/sched/em_cmp.mod.o
