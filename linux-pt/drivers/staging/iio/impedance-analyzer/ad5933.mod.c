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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xbba89470, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xfed3a75b, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xff5f331a, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x71cdd88d, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0xa5809b34, __VMLINUX_SYMBOL_STR(iio_buffer_get) },
	{ 0x36c9f25c, __VMLINUX_SYMBOL_STR(iio_kfifo_allocate) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x70996c66, __VMLINUX_SYMBOL_STR(regulator_get_voltage) },
	{ 0x83040859, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0x98778457, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0xdbfa79f3, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x21603de, __VMLINUX_SYMBOL_STR(iio_push_to_buffers) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x222e7ce2, __VMLINUX_SYMBOL_STR(sysfs_streq) },
	{ 0x5ac15bae, __VMLINUX_SYMBOL_STR(kstrtou16) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x820cbcd, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x33f4ad6a, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xbdbc1d53, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0xefde917c, __VMLINUX_SYMBOL_STR(iio_kfifo_free) },
	{ 0x492bc167, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,kfifo_buf";

MODULE_ALIAS("i2c:ad5933");
MODULE_ALIAS("i2c:ad5934");
