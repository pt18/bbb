cmd_drivers/net/mii.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/net/mii.ko drivers/net/mii.o drivers/net/mii.mod.o
