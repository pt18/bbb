cmd_net/ipv6/ip6_udp_tunnel.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/ipv6/ip6_udp_tunnel.ko net/ipv6/ip6_udp_tunnel.o net/ipv6/ip6_udp_tunnel.mod.o
