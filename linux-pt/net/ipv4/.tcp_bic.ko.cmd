cmd_net/ipv4/tcp_bic.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/ipv4/tcp_bic.ko net/ipv4/tcp_bic.o net/ipv4/tcp_bic.mod.o
