cmd_drivers/misc/tieqep.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/misc/tieqep.ko drivers/misc/tieqep.o drivers/misc/tieqep.mod.o
