cmd_drivers/iio/buffer/industrialio-triggered-buffer.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/iio/buffer/industrialio-triggered-buffer.ko drivers/iio/buffer/industrialio-triggered-buffer.o drivers/iio/buffer/industrialio-triggered-buffer.mod.o