cmd_drivers/net/ppp/pppox.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/net/ppp/pppox.ko drivers/net/ppp/pppox.o drivers/net/ppp/pppox.mod.o
