cmd_drivers/block/virtio_blk.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/block/virtio_blk.ko drivers/block/virtio_blk.o drivers/block/virtio_blk.mod.o
