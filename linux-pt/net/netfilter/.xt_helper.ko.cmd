cmd_net/netfilter/xt_helper.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/netfilter/xt_helper.ko net/netfilter/xt_helper.o net/netfilter/xt_helper.mod.o
