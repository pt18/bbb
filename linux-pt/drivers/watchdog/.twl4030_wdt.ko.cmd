cmd_drivers/watchdog/twl4030_wdt.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/watchdog/twl4030_wdt.ko drivers/watchdog/twl4030_wdt.o drivers/watchdog/twl4030_wdt.mod.o
