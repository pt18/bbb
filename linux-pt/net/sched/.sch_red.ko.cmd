cmd_net/sched/sch_red.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/sched/sch_red.ko net/sched/sch_red.o net/sched/sch_red.mod.o
