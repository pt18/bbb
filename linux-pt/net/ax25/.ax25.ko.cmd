cmd_net/ax25/ax25.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/ax25/ax25.ko net/ax25/ax25.o net/ax25/ax25.mod.o
