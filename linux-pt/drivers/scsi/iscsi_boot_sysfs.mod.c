#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xbba89470, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x68abb700, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x9752f8e2, __VMLINUX_SYMBOL_STR(kset_create_and_add) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc0c9f04a, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3995c8b7, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0xdc0b8e51, __VMLINUX_SYMBOL_STR(firmware_kobj) },
	{ 0x1403bc31, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xa13f2b11, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x31683780, __VMLINUX_SYMBOL_STR(kset_unregister) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

