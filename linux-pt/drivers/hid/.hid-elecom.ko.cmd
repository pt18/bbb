cmd_drivers/hid/hid-elecom.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hid/hid-elecom.ko drivers/hid/hid-elecom.o drivers/hid/hid-elecom.mod.o