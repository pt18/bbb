cmd_fs/nls/nls_iso8859-2.ko := arm-linux-gnu-ld -EL -r  -T ./scripts/module-common.lds --build-id  -T ./arch/arm/kernel/module.lds -o fs/nls/nls_iso8859-2.ko fs/nls/nls_iso8859-2.o fs/nls/nls_iso8859-2.mod.o