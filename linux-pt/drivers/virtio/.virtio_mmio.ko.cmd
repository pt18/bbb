cmd_drivers/virtio/virtio_mmio.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/virtio/virtio_mmio.ko drivers/virtio/virtio_mmio.o drivers/virtio/virtio_mmio.mod.o
