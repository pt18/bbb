cmd_drivers/input/joystick/grip_mp.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/input/joystick/grip_mp.ko drivers/input/joystick/grip_mp.o drivers/input/joystick/grip_mp.mod.o
