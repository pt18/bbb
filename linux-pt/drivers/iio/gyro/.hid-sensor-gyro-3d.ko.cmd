cmd_drivers/iio/gyro/hid-sensor-gyro-3d.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/iio/gyro/hid-sensor-gyro-3d.ko drivers/iio/gyro/hid-sensor-gyro-3d.o drivers/iio/gyro/hid-sensor-gyro-3d.mod.o