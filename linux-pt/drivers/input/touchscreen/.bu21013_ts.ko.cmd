cmd_drivers/input/touchscreen/bu21013_ts.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/input/touchscreen/bu21013_ts.ko drivers/input/touchscreen/bu21013_ts.o drivers/input/touchscreen/bu21013_ts.mod.o