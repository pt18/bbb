cmd_net/sched/em_text.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/sched/em_text.ko net/sched/em_text.o net/sched/em_text.mod.o
