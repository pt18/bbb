cmd_arch/arm/crypto/sha1-arm-neon.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o arch/arm/crypto/sha1-arm-neon.ko arch/arm/crypto/sha1-arm-neon.o arch/arm/crypto/sha1-arm-neon.mod.o
