cmd_net/xfrm/xfrm_user.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o net/xfrm/xfrm_user.ko net/xfrm/xfrm_user.o net/xfrm/xfrm_user.mod.o
