cmd_drivers/leds/leds-lp55xx-common.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/leds/leds-lp55xx-common.ko drivers/leds/leds-lp55xx-common.o drivers/leds/leds-lp55xx-common.mod.o