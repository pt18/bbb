cmd_crypto/twofish_common.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/twofish_common.ko crypto/twofish_common.o crypto/twofish_common.mod.o
