cmd_drivers/scsi/osst.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/scsi/osst.ko drivers/scsi/osst.o drivers/scsi/osst.mod.o
