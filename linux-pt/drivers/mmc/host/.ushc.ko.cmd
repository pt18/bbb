cmd_drivers/mmc/host/ushc.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/mmc/host/ushc.ko drivers/mmc/host/ushc.o drivers/mmc/host/ushc.mod.o
