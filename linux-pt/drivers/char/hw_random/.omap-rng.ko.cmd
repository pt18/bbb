cmd_drivers/char/hw_random/omap-rng.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/char/hw_random/omap-rng.ko drivers/char/hw_random/omap-rng.o drivers/char/hw_random/omap-rng.mod.o
