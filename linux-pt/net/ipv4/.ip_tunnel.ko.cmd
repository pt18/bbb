cmd_net/ipv4/ip_tunnel.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/ipv4/ip_tunnel.ko net/ipv4/ip_tunnel.o net/ipv4/ip_tunnel.mod.o
