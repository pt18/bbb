cmd_net/netfilter/xt_realm.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/netfilter/xt_realm.ko net/netfilter/xt_realm.o net/netfilter/xt_realm.mod.o
