cmd_drivers/scsi/libfc/libfc.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/scsi/libfc/libfc.ko drivers/scsi/libfc/libfc.o drivers/scsi/libfc/libfc.mod.o
