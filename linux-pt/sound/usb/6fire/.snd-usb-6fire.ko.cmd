cmd_sound/usb/6fire/snd-usb-6fire.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o sound/usb/6fire/snd-usb-6fire.ko sound/usb/6fire/snd-usb-6fire.o sound/usb/6fire/snd-usb-6fire.mod.o