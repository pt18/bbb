cmd_drivers/hid/hid-appleir.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hid/hid-appleir.ko drivers/hid/hid-appleir.o drivers/hid/hid-appleir.mod.o