cmd_sound/core/seq/oss/snd-seq-oss.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o sound/core/seq/oss/snd-seq-oss.ko sound/core/seq/oss/snd-seq-oss.o sound/core/seq/oss/snd-seq-oss.mod.o