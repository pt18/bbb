cmd_drivers/input/touchscreen/elo.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/input/touchscreen/elo.ko drivers/input/touchscreen/elo.o drivers/input/touchscreen/elo.mod.o