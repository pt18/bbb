cmd_crypto/authenc.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/authenc.ko crypto/authenc.o crypto/authenc.mod.o
