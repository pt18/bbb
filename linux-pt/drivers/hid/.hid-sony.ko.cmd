cmd_drivers/hid/hid-sony.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hid/hid-sony.ko drivers/hid/hid-sony.o drivers/hid/hid-sony.mod.o