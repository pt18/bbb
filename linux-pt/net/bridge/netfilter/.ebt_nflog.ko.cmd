cmd_net/bridge/netfilter/ebt_nflog.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/bridge/netfilter/ebt_nflog.ko net/bridge/netfilter/ebt_nflog.o net/bridge/netfilter/ebt_nflog.mod.o