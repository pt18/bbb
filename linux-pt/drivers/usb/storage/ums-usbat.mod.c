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
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8e1634c4, __VMLINUX_SYMBOL_STR(usb_stor_set_xfer_buf) },
	{ 0xbd50b4cf, __VMLINUX_SYMBOL_STR(usb_stor_access_xfer_buf) },
	{ 0x18a3f633, __VMLINUX_SYMBOL_STR(usb_stor_post_reset) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xcea4d80a, __VMLINUX_SYMBOL_STR(usb_stor_disconnect) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x3683ad6f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x9a0c33d4, __VMLINUX_SYMBOL_STR(usb_stor_probe2) },
	{ 0xfab33843, __VMLINUX_SYMBOL_STR(fill_inquiry_response) },
	{ 0xb274b70c, __VMLINUX_SYMBOL_STR(usb_stor_host_template_init) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3052f89, __VMLINUX_SYMBOL_STR(usb_stor_pre_reset) },
	{ 0x51a418ef, __VMLINUX_SYMBOL_STR(usb_stor_reset_resume) },
	{ 0xa595076e, __VMLINUX_SYMBOL_STR(usb_stor_ctrl_transfer) },
	{ 0x69a0d294, __VMLINUX_SYMBOL_STR(usb_stor_suspend) },
	{ 0xa3c7f3f8, __VMLINUX_SYMBOL_STR(usb_stor_CB_reset) },
	{ 0x9fa83334, __VMLINUX_SYMBOL_STR(usb_stor_clear_halt) },
	{ 0x1d5ad46, __VMLINUX_SYMBOL_STR(usb_stor_probe1) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xce2aa3af, __VMLINUX_SYMBOL_STR(usb_stor_resume) },
	{ 0x30d3518a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x22517700, __VMLINUX_SYMBOL_STR(usb_stor_bulk_transfer_sg) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v03F0p0207d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p0307d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0781p0005d0005dc*dsc*dp*ic*isc*ip*in*");
