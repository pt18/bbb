cmd_drivers/iio/adc/ti-ads1015.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/iio/adc/ti-ads1015.ko drivers/iio/adc/ti-ads1015.o drivers/iio/adc/ti-ads1015.mod.o