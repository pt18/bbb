cmd_drivers/input/misc/mpu3050.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/input/misc/mpu3050.ko drivers/input/misc/mpu3050.o drivers/input/misc/mpu3050.mod.o
