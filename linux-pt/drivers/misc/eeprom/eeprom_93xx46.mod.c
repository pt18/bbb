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
	{ 0x66c1dec3, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x7bc5d8ee, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x1c383829, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x224d240a, __VMLINUX_SYMBOL_STR(gpiod_direction_output) },
	{ 0x9af2fd11, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd481c431, __VMLINUX_SYMBOL_STR(nvmem_register) },
	{ 0x1a8b76, __VMLINUX_SYMBOL_STR(__devm_regmap_init) },
	{ 0xd2508b7d, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa71e78d, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x2be40654, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xb1bbca04, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x768325b5, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x5f428112, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0xf9375a01, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x9a6be253, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa7547b33, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x4e5e2b08, __VMLINUX_SYMBOL_STR(nvmem_unregister) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Ceeprom-93xx46*");
MODULE_ALIAS("of:N*T*Catmel,at93c46d*");
