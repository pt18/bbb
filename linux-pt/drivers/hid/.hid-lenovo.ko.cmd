cmd_drivers/hid/hid-lenovo.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hid/hid-lenovo.ko drivers/hid/hid-lenovo.o drivers/hid/hid-lenovo.mod.o