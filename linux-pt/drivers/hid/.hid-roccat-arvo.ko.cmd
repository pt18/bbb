cmd_drivers/hid/hid-roccat-arvo.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/hid/hid-roccat-arvo.ko drivers/hid/hid-roccat-arvo.o drivers/hid/hid-roccat-arvo.mod.o