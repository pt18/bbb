cmd_drivers/gpio/gpio-max7301.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/gpio/gpio-max7301.ko drivers/gpio/gpio-max7301.o drivers/gpio/gpio-max7301.mod.o