cmd_drivers/net/tun.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/net/tun.ko drivers/net/tun.o drivers/net/tun.mod.o
