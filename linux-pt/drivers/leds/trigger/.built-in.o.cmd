cmd_drivers/leds/trigger/built-in.o :=  arm-linux-gnu-ld -EL    -r -o drivers/leds/trigger/built-in.o drivers/leds/trigger/ledtrig-timer.o drivers/leds/trigger/ledtrig-oneshot.o drivers/leds/trigger/ledtrig-heartbeat.o drivers/leds/trigger/ledtrig-backlight.o drivers/leds/trigger/ledtrig-gpio.o drivers/leds/trigger/ledtrig-default-on.o 
