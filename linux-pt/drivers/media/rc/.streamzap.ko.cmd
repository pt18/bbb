cmd_drivers/media/rc/streamzap.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/media/rc/streamzap.ko drivers/media/rc/streamzap.o drivers/media/rc/streamzap.mod.o