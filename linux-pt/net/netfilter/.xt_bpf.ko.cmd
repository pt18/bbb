cmd_net/netfilter/xt_bpf.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/netfilter/xt_bpf.ko net/netfilter/xt_bpf.o net/netfilter/xt_bpf.mod.o
