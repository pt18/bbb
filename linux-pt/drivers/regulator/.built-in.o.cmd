cmd_drivers/regulator/built-in.o :=  arm-linux-gnu-ld -EL    -r -o drivers/regulator/built-in.o drivers/regulator/core.o drivers/regulator/dummy.o drivers/regulator/fixed-helper.o drivers/regulator/helpers.o drivers/regulator/devres.o drivers/regulator/of_regulator.o drivers/regulator/fixed.o drivers/regulator/gpio-regulator.o drivers/regulator/palmas-regulator.o drivers/regulator/pwm-regulator.o drivers/regulator/pbias-regulator.o drivers/regulator/ti-abb-regulator.o drivers/regulator/tps65023-regulator.o drivers/regulator/tps6507x-regulator.o drivers/regulator/tps65217-regulator.o drivers/regulator/tps65218-regulator.o drivers/regulator/tps65910-regulator.o drivers/regulator/twl-regulator.o 