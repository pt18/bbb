cmd_drivers/spi/spi-bitbang.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/spi/spi-bitbang.ko drivers/spi/spi-bitbang.o drivers/spi/spi-bitbang.mod.o