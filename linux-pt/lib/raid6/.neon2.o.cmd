cmd_lib/raid6/neon2.o := arm-linux-gnu-gcc -Wp,-MD,lib/raid6/.neon2.o.d  -nostdinc -isystem /usr/lib/gcc/arm-linux-gnueabi/7/include -I./arch/arm/include -Iarch/arm/include/generated/uapi -Iarch/arm/include/generated  -Iinclude -I./arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I./include/uapi -Iinclude/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-PIE -fno-dwarf2-cfi-asm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -fno-ipa-sra -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -fno-delete-null-pointer-checks -Wno-maybe-uninitialized -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-int-in-bool-context -O2 --param=allow-store-data-races=0 -DCC_HAVE_ASM_GOTO -Wframe-larger-than=1024 -fstack-protector-strong -Wno-unused-but-set-variable -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -Werror=incompatible-pointer-types -ffreestanding -mfloat-abi=softfp -mfpu=neon    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(neon2)"  -D"KBUILD_MODNAME=KBUILD_STR(raid6_pq)" -c -o lib/raid6/.tmp_neon2.o lib/raid6/neon2.c

source_lib/raid6/neon2.o := lib/raid6/neon2.c

deps_lib/raid6/neon2.o := \
  /usr/lib/gcc/arm-linux-gnueabi/7/include/arm_neon.h \
  /usr/lib/gcc/arm-linux-gnueabi/7/include/arm_fp16.h \
  /usr/lib/gcc/arm-linux-gnueabi/7/include/stdint.h \
  /usr/lib/gcc/arm-linux-gnueabi/7/include/stdint-gcc.h \

lib/raid6/neon2.o: $(deps_lib/raid6/neon2.o)

$(deps_lib/raid6/neon2.o):
