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
	{ 0x9c30b87a, __VMLINUX_SYMBOL_STR(ppp_unregister_compressor) },
	{ 0x5904531d, __VMLINUX_SYMBOL_STR(ppp_register_compressor) },
	{ 0xc890c008, __VMLINUX_SYMBOL_STR(zlib_deflateEnd) },
	{ 0x5a0b73d0, __VMLINUX_SYMBOL_STR(zlib_deflateInit2) },
	{ 0xe9f7149c, __VMLINUX_SYMBOL_STR(zlib_deflate_workspacesize) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x107e5878, __VMLINUX_SYMBOL_STR(zlib_inflateEnd) },
	{ 0x35a88f28, __VMLINUX_SYMBOL_STR(zlib_inflateInit2) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xce5ac24f, __VMLINUX_SYMBOL_STR(zlib_inflate_workspacesize) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x581f98da, __VMLINUX_SYMBOL_STR(zlib_inflate) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x424d3620, __VMLINUX_SYMBOL_STR(zlib_inflateIncomp) },
	{ 0x6aeefac4, __VMLINUX_SYMBOL_STR(zlib_deflateReset) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf2c43f3f, __VMLINUX_SYMBOL_STR(zlib_deflate) },
	{ 0xbb0540aa, __VMLINUX_SYMBOL_STR(zlib_inflateReset) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ppp_generic";
