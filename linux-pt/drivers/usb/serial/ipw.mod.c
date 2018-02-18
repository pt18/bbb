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
	{ 0x2e88d29, __VMLINUX_SYMBOL_STR(usb_wwan_write) },
	{ 0xd7e1854e, __VMLINUX_SYMBOL_STR(usb_wwan_port_remove) },
	{ 0x34a15400, __VMLINUX_SYMBOL_STR(usb_wwan_port_probe) },
	{ 0xb9479382, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0xda94fbff, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x273dac34, __VMLINUX_SYMBOL_STR(usb_wwan_open) },
	{ 0x6d1a35f2, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x9cd9f5d1, __VMLINUX_SYMBOL_STR(usb_wwan_close) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7808d2bf, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb_wwan,usbserial";

MODULE_ALIAS("usb:v0BC3p0001d*dc*dsc*dp*ic*isc*ip*in*");
