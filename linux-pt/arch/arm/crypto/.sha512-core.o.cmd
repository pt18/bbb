cmd_arch/arm/crypto/sha512-core.o := arm-linux-gnu-gcc -Wp,-MD,arch/arm/crypto/.sha512-core.o.d  -nostdinc -isystem /usr/lib/gcc/arm-linux-gnueabi/7/include -I./arch/arm/include -Iarch/arm/include/generated/uapi -Iarch/arm/include/generated  -Iinclude -I./arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I./include/uapi -Iinclude/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian   -D__ASSEMBLY__ -fno-PIE -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a  -include asm/unified.h -msoft-float -DCC_HAVE_ASM_GOTO           -DMODULE  -c -o arch/arm/crypto/sha512-core.o arch/arm/crypto/sha512-core.S

source_arch/arm/crypto/sha512-core.o := arch/arm/crypto/sha512-core.S

deps_arch/arm/crypto/sha512-core.o := \
  arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/cpu/v7m.h) \
    $(wildcard include/config/thumb2/kernel.h) \

arch/arm/crypto/sha512-core.o: $(deps_arch/arm/crypto/sha512-core.o)

$(deps_arch/arm/crypto/sha512-core.o):
