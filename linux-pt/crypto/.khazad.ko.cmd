cmd_crypto/khazad.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o crypto/khazad.ko crypto/khazad.o crypto/khazad.mod.o
