cmd_net/netfilter/xt_set.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/netfilter/xt_set.ko net/netfilter/xt_set.o net/netfilter/xt_set.mod.o