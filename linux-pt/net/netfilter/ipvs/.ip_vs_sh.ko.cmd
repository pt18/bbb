cmd_net/netfilter/ipvs/ip_vs_sh.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/netfilter/ipvs/ip_vs_sh.ko net/netfilter/ipvs/ip_vs_sh.o net/netfilter/ipvs/ip_vs_sh.mod.o