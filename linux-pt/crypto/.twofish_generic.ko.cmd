cmd_crypto/twofish_generic.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/twofish_generic.ko crypto/twofish_generic.o crypto/twofish_generic.mod.o
