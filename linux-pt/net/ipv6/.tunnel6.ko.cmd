cmd_net/ipv6/tunnel6.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/ipv6/tunnel6.ko net/ipv6/tunnel6.o net/ipv6/tunnel6.mod.o
