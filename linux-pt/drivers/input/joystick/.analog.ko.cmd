cmd_drivers/input/joystick/analog.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/input/joystick/analog.ko drivers/input/joystick/analog.o drivers/input/joystick/analog.mod.o
