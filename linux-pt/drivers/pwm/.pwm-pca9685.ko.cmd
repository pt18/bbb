cmd_drivers/pwm/pwm-pca9685.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/pwm/pwm-pca9685.ko drivers/pwm/pwm-pca9685.o drivers/pwm/pwm-pca9685.mod.o