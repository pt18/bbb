cmd_drivers/net/slip/slip.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/net/slip/slip.ko drivers/net/slip/slip.o drivers/net/slip/slip.mod.o
