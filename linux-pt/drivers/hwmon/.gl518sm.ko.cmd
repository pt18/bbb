cmd_drivers/hwmon/gl518sm.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hwmon/gl518sm.ko drivers/hwmon/gl518sm.o drivers/hwmon/gl518sm.mod.o