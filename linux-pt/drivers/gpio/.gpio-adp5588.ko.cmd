cmd_drivers/gpio/gpio-adp5588.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/gpio/gpio-adp5588.ko drivers/gpio/gpio-adp5588.o drivers/gpio/gpio-adp5588.mod.o
