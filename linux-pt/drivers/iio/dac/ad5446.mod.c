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
	{ 0x416d01d3, __VMLINUX_SYMBOL_STR(iio_enum_available_read) },
	{ 0xf6dc541f, __VMLINUX_SYMBOL_STR(iio_enum_write) },
	{ 0x471312eb, __VMLINUX_SYMBOL_STR(iio_enum_read) },
	{ 0xfed3a75b, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x66c1dec3, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xff5f331a, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x7bc5d8ee, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x2ab0d0e3, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xd87202be, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x71cdd88d, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0xdbfa79f3, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x70996c66, __VMLINUX_SYMBOL_STR(regulator_get_voltage) },
	{ 0x83040859, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0x98778457, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x752d5f5b, __VMLINUX_SYMBOL_STR(kstrtobool) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9a6be253, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xbdbc1d53, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0x492bc167, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";

MODULE_ALIAS("i2c:ad5301");
MODULE_ALIAS("i2c:ad5311");
MODULE_ALIAS("i2c:ad5321");
MODULE_ALIAS("i2c:ad5602");
MODULE_ALIAS("i2c:ad5612");
MODULE_ALIAS("i2c:ad5622");
MODULE_ALIAS("spi:ad5300");
MODULE_ALIAS("spi:ad5310");
MODULE_ALIAS("spi:ad5320");
MODULE_ALIAS("spi:ad5444");
MODULE_ALIAS("spi:ad5446");
MODULE_ALIAS("spi:ad5450");
MODULE_ALIAS("spi:ad5451");
MODULE_ALIAS("spi:ad5452");
MODULE_ALIAS("spi:ad5453");
MODULE_ALIAS("spi:ad5512a");
MODULE_ALIAS("spi:ad5541a");
MODULE_ALIAS("spi:ad5542a");
MODULE_ALIAS("spi:ad5543");
MODULE_ALIAS("spi:ad5553");
MODULE_ALIAS("spi:ad5601");
MODULE_ALIAS("spi:ad5611");
MODULE_ALIAS("spi:ad5621");
MODULE_ALIAS("spi:ad5641");
MODULE_ALIAS("spi:ad5620-2500");
MODULE_ALIAS("spi:ad5620-1250");
MODULE_ALIAS("spi:ad5640-2500");
MODULE_ALIAS("spi:ad5640-1250");
MODULE_ALIAS("spi:ad5660-2500");
MODULE_ALIAS("spi:ad5660-1250");
MODULE_ALIAS("spi:ad5662");
