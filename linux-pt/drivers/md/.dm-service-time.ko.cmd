cmd_drivers/md/dm-service-time.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/md/dm-service-time.ko drivers/md/dm-service-time.o drivers/md/dm-service-time.mod.o
