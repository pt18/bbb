cmd_drivers/crypto/omap-des.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/crypto/omap-des.ko drivers/crypto/omap-des.o drivers/crypto/omap-des.mod.o
