cmd_net/bluetooth/bluetooth_6lowpan.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/bluetooth/bluetooth_6lowpan.ko net/bluetooth/bluetooth_6lowpan.o net/bluetooth/bluetooth_6lowpan.mod.o
