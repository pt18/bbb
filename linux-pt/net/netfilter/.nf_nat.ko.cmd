cmd_net/netfilter/nf_nat.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/netfilter/nf_nat.ko net/netfilter/nf_nat.o net/netfilter/nf_nat.mod.o
