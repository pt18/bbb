cmd_drivers/iio/dac/max517.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/iio/dac/max517.ko drivers/iio/dac/max517.o drivers/iio/dac/max517.mod.o