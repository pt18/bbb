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
	{ 0xfed3a75b, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xff5f331a, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x2991bf5b, __VMLINUX_SYMBOL_STR(dev_driver_string) },
	{ 0x33f4ad6a, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0xeac9f591, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x65cfafe4, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0x9af2fd11, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xcf720183, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xa70d54cb, __VMLINUX_SYMBOL_STR(i2c_smbus_write_word_data) },
	{ 0xae9392a7, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x7aa9f2b8, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x8c844aa3, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xeec7aaf1, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x820cbcd, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x55a55df7, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb07e4956, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:tca6416-keys");
MODULE_ALIAS("i2c:tca6408-keys");
