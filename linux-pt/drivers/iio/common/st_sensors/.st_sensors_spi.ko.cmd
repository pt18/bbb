cmd_drivers/iio/common/st_sensors/st_sensors_spi.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/iio/common/st_sensors/st_sensors_spi.ko drivers/iio/common/st_sensors/st_sensors_spi.o drivers/iio/common/st_sensors/st_sensors_spi.mod.o