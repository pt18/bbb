cmd_drivers/input/joystick/twidjoy.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/input/joystick/twidjoy.ko drivers/input/joystick/twidjoy.o drivers/input/joystick/twidjoy.mod.o
