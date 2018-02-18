#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xbba89470, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x97519106, __VMLINUX_SYMBOL_STR(iio_read_const_attr) },
	{ 0xfed3a75b, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xff5f331a, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x4964c76b, __VMLINUX_SYMBOL_STR(devm_iio_device_register) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xc3eca5e7, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0xdbfa79f3, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc968db4a, __VMLINUX_SYMBOL_STR(regmap_bulk_read) },
	{ 0x9c140c32, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xf6f48abf, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4bd8024f, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2d8f49ac, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
	{ 0x837f3ab, __VMLINUX_SYMBOL_STR(regcache_sync_region) },
	{ 0x8b574763, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";

MODULE_ALIAS("i2c:mmc35240");
MODULE_ALIAS("acpi*:MMC35240:*");
MODULE_ALIAS("of:N*T*Cmemsic,mmc35240*");