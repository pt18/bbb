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
	{ 0x303db81d, __VMLINUX_SYMBOL_STR(genphy_resume) },
	{ 0x87799113, __VMLINUX_SYMBOL_STR(genphy_suspend) },
	{ 0xae7ec533, __VMLINUX_SYMBOL_STR(phy_drivers_unregister) },
	{ 0xefe8b813, __VMLINUX_SYMBOL_STR(phy_drivers_register) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x57f0cb27, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0x82ed594, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xe5608f9c, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0x6e33f68e, __VMLINUX_SYMBOL_STR(genphy_read_status) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3442bb40, __VMLINUX_SYMBOL_STR(genphy_config_aneg) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("mdio:????001001000011000011011000????");
MODULE_ALIAS("mdio:????001001000011000011011001????");
MODULE_ALIAS("mdio:????001001000011000011000101????");
