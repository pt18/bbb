cmd_drivers/net/ifb.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/net/ifb.ko drivers/net/ifb.o drivers/net/ifb.mod.o
