cmd_drivers/nfc/microread/microread.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o drivers/nfc/microread/microread.ko drivers/nfc/microread/microread.o drivers/nfc/microread/microread.mod.o