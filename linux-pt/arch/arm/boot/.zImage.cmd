cmd_arch/arm/boot/zImage := arm-linux-gnu-objcopy -O binary -R .comment -S  arch/arm/boot/compressed/vmlinux arch/arm/boot/zImage
