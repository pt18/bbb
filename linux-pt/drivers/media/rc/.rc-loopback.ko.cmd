cmd_drivers/media/rc/rc-loopback.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/media/rc/rc-loopback.ko drivers/media/rc/rc-loopback.o drivers/media/rc/rc-loopback.mod.o
