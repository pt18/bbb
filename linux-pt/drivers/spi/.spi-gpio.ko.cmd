cmd_drivers/spi/spi-gpio.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/spi/spi-gpio.ko drivers/spi/spi-gpio.o drivers/spi/spi-gpio.mod.o