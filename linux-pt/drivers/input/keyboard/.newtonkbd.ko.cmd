cmd_drivers/input/keyboard/newtonkbd.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/input/keyboard/newtonkbd.ko drivers/input/keyboard/newtonkbd.o drivers/input/keyboard/newtonkbd.mod.o