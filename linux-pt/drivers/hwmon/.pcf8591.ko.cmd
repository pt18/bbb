cmd_drivers/hwmon/pcf8591.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hwmon/pcf8591.ko drivers/hwmon/pcf8591.o drivers/hwmon/pcf8591.mod.o
