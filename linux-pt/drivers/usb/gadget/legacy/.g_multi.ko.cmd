cmd_drivers/usb/gadget/legacy/g_multi.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/usb/gadget/legacy/g_multi.ko drivers/usb/gadget/legacy/g_multi.o drivers/usb/gadget/legacy/g_multi.mod.o