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
	{ 0xfed3a75b, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xff5f331a, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x3e9d7c1d, __VMLINUX_SYMBOL_STR(devm_hwmon_device_register_with_groups) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xef1c781c, __VMLINUX_SYMBOL_STR(vid_which_vrm) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x903c239, __VMLINUX_SYMBOL_STR(vid_from_reg) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x33f4ad6a, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x820cbcd, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon-vid";

MODULE_ALIAS("i2c:atxp1");

MODULE_INFO(srcversion, "1B7BD202CAC7D123A54B3AC");
