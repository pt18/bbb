cmd_net/sched/act_mirred.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/sched/act_mirred.ko net/sched/act_mirred.o net/sched/act_mirred.mod.o
