cmd_drivers/input/tablet/kbtab.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/input/tablet/kbtab.ko drivers/input/tablet/kbtab.o drivers/input/tablet/kbtab.mod.o
