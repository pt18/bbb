cmd_drivers/media/v4l2-core/tuner.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/media/v4l2-core/tuner.ko drivers/media/v4l2-core/tuner.o drivers/media/v4l2-core/tuner.mod.o