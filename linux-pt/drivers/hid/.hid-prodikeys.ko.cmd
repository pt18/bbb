cmd_drivers/hid/hid-prodikeys.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hid/hid-prodikeys.ko drivers/hid/hid-prodikeys.o drivers/hid/hid-prodikeys.mod.o
