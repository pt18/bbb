cmd_drivers/staging/speakup/speakup_dummy.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/staging/speakup/speakup_dummy.ko drivers/staging/speakup/speakup_dummy.o drivers/staging/speakup/speakup_dummy.mod.o