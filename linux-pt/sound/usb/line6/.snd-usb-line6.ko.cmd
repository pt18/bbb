cmd_sound/usb/line6/snd-usb-line6.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o sound/usb/line6/snd-usb-line6.ko sound/usb/line6/snd-usb-line6.o sound/usb/line6/snd-usb-line6.mod.o
