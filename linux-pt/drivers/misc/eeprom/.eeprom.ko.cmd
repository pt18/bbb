cmd_drivers/misc/eeprom/eeprom.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/misc/eeprom/eeprom.ko drivers/misc/eeprom/eeprom.o drivers/misc/eeprom/eeprom.mod.o
