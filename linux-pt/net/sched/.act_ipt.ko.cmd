cmd_net/sched/act_ipt.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/sched/act_ipt.ko net/sched/act_ipt.o net/sched/act_ipt.mod.o
