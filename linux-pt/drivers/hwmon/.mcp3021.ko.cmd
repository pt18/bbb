cmd_drivers/hwmon/mcp3021.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hwmon/mcp3021.ko drivers/hwmon/mcp3021.o drivers/hwmon/mcp3021.mod.o
