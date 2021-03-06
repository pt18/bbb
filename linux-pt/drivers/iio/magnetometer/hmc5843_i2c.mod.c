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
	{ 0xfcaf9d3e, __VMLINUX_SYMBOL_STR(hmc5843_common_resume) },
	{ 0xe88cc7ec, __VMLINUX_SYMBOL_STR(hmc5843_common_suspend) },
	{ 0xfed3a75b, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xff5f331a, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x657e0d84, __VMLINUX_SYMBOL_STR(hmc5843_common_probe) },
	{ 0xc3eca5e7, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4b254abd, __VMLINUX_SYMBOL_STR(hmc5843_common_remove) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hmc5843_core";

MODULE_ALIAS("of:N*T*Choneywell,hmc5843*");
MODULE_ALIAS("of:N*T*Choneywell,hmc5883*");
MODULE_ALIAS("of:N*T*Choneywell,hmc5883l*");
MODULE_ALIAS("of:N*T*Choneywell,hmc5983*");
MODULE_ALIAS("i2c:hmc5843");
MODULE_ALIAS("i2c:hmc5883");
MODULE_ALIAS("i2c:hmc5883l");
MODULE_ALIAS("i2c:hmc5983");
