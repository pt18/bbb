cmd_net/l2tp/l2tp_ppp.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/l2tp/l2tp_ppp.ko net/l2tp/l2tp_ppp.o net/l2tp/l2tp_ppp.mod.o
