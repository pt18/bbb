cmd_net/6lowpan/nhc_mobility.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/6lowpan/nhc_mobility.ko net/6lowpan/nhc_mobility.o net/6lowpan/nhc_mobility.mod.o
