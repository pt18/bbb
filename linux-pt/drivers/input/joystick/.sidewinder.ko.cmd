cmd_drivers/input/joystick/sidewinder.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/input/joystick/sidewinder.ko drivers/input/joystick/sidewinder.o drivers/input/joystick/sidewinder.mod.o
