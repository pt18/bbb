cmd_drivers/hwmon/lm90.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hwmon/lm90.ko drivers/hwmon/lm90.o drivers/hwmon/lm90.mod.o
