cmd_net/netfilter/x_tables.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/netfilter/x_tables.ko net/netfilter/x_tables.o net/netfilter/x_tables.mod.o
