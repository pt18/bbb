cmd_net/netfilter/nf_tables.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/netfilter/nf_tables.ko net/netfilter/nf_tables.o net/netfilter/nf_tables.mod.o