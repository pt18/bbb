cmd_net/sched/act_skbedit.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/sched/act_skbedit.ko net/sched/act_skbedit.o net/sched/act_skbedit.mod.o
