cmd_net/sched/em_u32.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/sched/em_u32.ko net/sched/em_u32.o net/sched/em_u32.mod.o
