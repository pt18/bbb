cmd_drivers/hid/hid-gfrm.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hid/hid-gfrm.ko drivers/hid/hid-gfrm.o drivers/hid/hid-gfrm.mod.o
