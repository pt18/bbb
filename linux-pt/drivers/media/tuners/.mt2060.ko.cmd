cmd_drivers/media/tuners/mt2060.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/media/tuners/mt2060.ko drivers/media/tuners/mt2060.o drivers/media/tuners/mt2060.mod.o