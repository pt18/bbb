cmd_drivers/usb/gadget/legacy/g_printer.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/usb/gadget/legacy/g_printer.ko drivers/usb/gadget/legacy/g_printer.o drivers/usb/gadget/legacy/g_printer.mod.o