cmd_net/atm/pppoatm.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/atm/pppoatm.ko net/atm/pppoatm.o net/atm/pppoatm.mod.o
