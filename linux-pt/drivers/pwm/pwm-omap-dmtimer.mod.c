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
	{ 0x2d2dcca0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x129f3122, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc03bf282, __VMLINUX_SYMBOL_STR(pwmchip_add) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xf02f85ae, __VMLINUX_SYMBOL_STR(of_pwm_xlate_with_flags) },
	{ 0x768325b5, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x67fbd38, __VMLINUX_SYMBOL_STR(of_find_device_by_node) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x6ba3fc3b, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x26bbcc39, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2a0bcfa7, __VMLINUX_SYMBOL_STR(pwmchip_remove) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,omap-dmtimer-pwm*");
