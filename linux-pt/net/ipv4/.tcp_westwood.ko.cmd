cmd_net/ipv4/tcp_westwood.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/ipv4/tcp_westwood.ko net/ipv4/tcp_westwood.o net/ipv4/tcp_westwood.mod.o
