cmd_net/netfilter/xt_TEE.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/netfilter/xt_TEE.ko net/netfilter/xt_TEE.o net/netfilter/xt_TEE.mod.o
