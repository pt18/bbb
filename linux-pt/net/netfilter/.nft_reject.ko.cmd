cmd_net/netfilter/nft_reject.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/netfilter/nft_reject.ko net/netfilter/nft_reject.o net/netfilter/nft_reject.mod.o
