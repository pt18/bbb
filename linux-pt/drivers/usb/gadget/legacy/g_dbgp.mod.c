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
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb7ab10c3, __VMLINUX_SYMBOL_STR(gserial_connect) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xd041d8e4, __VMLINUX_SYMBOL_STR(usb_gadget_unregister_driver) },
	{ 0xdff38e65, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig_reset) },
	{ 0x82fc8f56, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0x36db159c, __VMLINUX_SYMBOL_STR(gserial_disconnect) },
	{ 0x33bfdca2, __VMLINUX_SYMBOL_STR(gserial_alloc_line) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xbd0da194, __VMLINUX_SYMBOL_STR(usb_gadget_probe_driver) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb6652875, __VMLINUX_SYMBOL_STR(gserial_free_line) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=u_serial,libcomposite";

