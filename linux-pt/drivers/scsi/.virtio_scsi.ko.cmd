cmd_drivers/scsi/virtio_scsi.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/scsi/virtio_scsi.ko drivers/scsi/virtio_scsi.o drivers/scsi/virtio_scsi.mod.o
