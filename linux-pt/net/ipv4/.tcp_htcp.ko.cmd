cmd_net/ipv4/tcp_htcp.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/ipv4/tcp_htcp.ko net/ipv4/tcp_htcp.o net/ipv4/tcp_htcp.mod.o
