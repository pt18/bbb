cmd_sound/core/oss/snd-mixer-oss.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o sound/core/oss/snd-mixer-oss.ko sound/core/oss/snd-mixer-oss.o sound/core/oss/snd-mixer-oss.mod.o
