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
	{ 0x987bc0cf, __VMLINUX_SYMBOL_STR(fsg_config_from_params) },
	{ 0x1ccb58f7, __VMLINUX_SYMBOL_STR(fsg_common_set_num_buffers) },
	{ 0x6acb4179, __VMLINUX_SYMBOL_STR(fsg_common_set_inquiry_string) },
	{ 0xe1ec5ae0, __VMLINUX_SYMBOL_STR(usb_add_config) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x141fce2a, __VMLINUX_SYMBOL_STR(fsg_common_remove_luns) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x6dc39bc, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x8189eb43, __VMLINUX_SYMBOL_STR(usb_otg_descriptor_init) },
	{ 0x9a0221c7, __VMLINUX_SYMBOL_STR(fsg_common_free_buffers) },
	{ 0x1e1d4773, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x3bb87cfc, __VMLINUX_SYMBOL_STR(fsg_common_set_cdev) },
	{ 0x860f3a33, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0xb9cc4789, __VMLINUX_SYMBOL_STR(usb_otg_descriptor_alloc) },
	{ 0xb9544878, __VMLINUX_SYMBOL_STR(usb_composite_overwrite_options) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x96eaf73e, __VMLINUX_SYMBOL_STR(usb_composite_probe) },
	{ 0x18940c30, __VMLINUX_SYMBOL_STR(usb_add_function) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x546c7f99, __VMLINUX_SYMBOL_STR(fsg_common_create_luns) },
	{ 0xca33ba3a, __VMLINUX_SYMBOL_STR(usb_put_function) },
	{ 0xb6f28e1e, __VMLINUX_SYMBOL_STR(usb_composite_unregister) },
	{ 0x32bfbf54, __VMLINUX_SYMBOL_STR(usb_get_function) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa86aa373, __VMLINUX_SYMBOL_STR(usb_string_ids_tab) },
	{ 0x63ee3422, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x60eb1995, __VMLINUX_SYMBOL_STR(usb_get_function_instance) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x7e26d4a5, __VMLINUX_SYMBOL_STR(fsg_common_set_sysfs) },
	{ 0x3f510825, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x72aedf9c, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x73e46b3a, __VMLINUX_SYMBOL_STR(usb_remove_function) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb_f_mass_storage,libcomposite";

