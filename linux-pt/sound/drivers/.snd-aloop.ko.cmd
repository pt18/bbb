cmd_sound/drivers/snd-aloop.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o sound/drivers/snd-aloop.ko sound/drivers/snd-aloop.o sound/drivers/snd-aloop.mod.o
