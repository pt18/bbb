cmd_net/openvswitch/openvswitch.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/openvswitch/openvswitch.ko net/openvswitch/openvswitch.o net/openvswitch/openvswitch.mod.o
