cmd_net/ipv4/tcp_cdg.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/ipv4/tcp_cdg.ko net/ipv4/tcp_cdg.o net/ipv4/tcp_cdg.mod.o
