cmd_net/sched/sch_prio.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/sched/sch_prio.ko net/sched/sch_prio.o net/sched/sch_prio.mod.o
