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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x8e56a21f, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x17d60141, __VMLINUX_SYMBOL_STR(videobuf_mmap_mapper) },
	{ 0x941fc39, __VMLINUX_SYMBOL_STR(vb2_mmap) },
	{ 0xb4d2ca1f, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x5f3e3558, __VMLINUX_SYMBOL_STR(soc_mbus_bytes_per_line) },
	{ 0x56fe2460, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0xf8db8fe6, __VMLINUX_SYMBOL_STR(v4l2_clk_disable) },
	{ 0x69209cce, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xf4cde78f, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x805aa2d3, __VMLINUX_SYMBOL_STR(vb2_create_bufs) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x5b200e8b, __VMLINUX_SYMBOL_STR(videobuf_streamon) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xea96fc21, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x15e1de7b, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xd33425b2, __VMLINUX_SYMBOL_STR(i2c_put_adapter) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x129f3122, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xf06a15bc, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xc70c0c4d, __VMLINUX_SYMBOL_STR(devm_regulator_bulk_get) },
	{ 0x5adbe8ae, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0xe85fed11, __VMLINUX_SYMBOL_STR(vb2_read) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9dea902e, __VMLINUX_SYMBOL_STR(of_find_i2c_device_by_node) },
	{ 0xa2b6d27e, __VMLINUX_SYMBOL_STR(vb2_prepare_buf) },
	{ 0xa41b1e7e, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x23fd6c4e, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xadf40542, __VMLINUX_SYMBOL_STR(videobuf_qbuf) },
	{ 0x5f969406, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xa789dd0c, __VMLINUX_SYMBOL_STR(of_graph_get_next_endpoint) },
	{ 0x74eefda5, __VMLINUX_SYMBOL_STR(platform_device_del) },
	{ 0xce7cbd68, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0xf0f49d0b, __VMLINUX_SYMBOL_STR(v4l2_async_notifier_register) },
	{ 0xa72f31c5, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x9a7eb152, __VMLINUX_SYMBOL_STR(videobuf_querybuf) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1dd27d4c, __VMLINUX_SYMBOL_STR(vb2_qbuf) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x70610941, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x2efa7b7a, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0x4394572f, __VMLINUX_SYMBOL_STR(vb2_querybuf) },
	{ 0xa5c43694, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0xda2b8804, __VMLINUX_SYMBOL_STR(v4l2_clk_unregister) },
	{ 0x715bf83c, __VMLINUX_SYMBOL_STR(v4l2_device_unregister_subdev) },
	{ 0x7ef938fa, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x29f5a98b, __VMLINUX_SYMBOL_STR(soc_mbus_get_fmtdesc) },
	{ 0x691274c3, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xaf2ef625, __VMLINUX_SYMBOL_STR(vb2_streamon) },
	{ 0x118be472, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0xacaff8e6, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xc907fa9a, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x7be9c4c1, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x477a778e, __VMLINUX_SYMBOL_STR(vb2_expbuf) },
	{ 0x17cffc5, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0xec4d4463, __VMLINUX_SYMBOL_STR(vb2_reqbufs) },
	{ 0x533d54dd, __VMLINUX_SYMBOL_STR(v4l2_clk_enable) },
	{ 0x8557f117, __VMLINUX_SYMBOL_STR(platform_device_add_data) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x8f885ce7, __VMLINUX_SYMBOL_STR(videobuf_dqbuf) },
	{ 0xd2508b7d, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x711434e5, __VMLINUX_SYMBOL_STR(of_graph_get_remote_port) },
	{ 0xa53c4035, __VMLINUX_SYMBOL_STR(vb2_dqbuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x20c0969e, __VMLINUX_SYMBOL_STR(videobuf_reqbufs) },
	{ 0x1ac08a42, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x66a5ddc, __VMLINUX_SYMBOL_STR(v4l2_clk_register) },
	{ 0xa9c3f1a1, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev_board) },
	{ 0xb9367be5, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xaca4d20f, __VMLINUX_SYMBOL_STR(v4l2_ctrl_add_handler) },
	{ 0x2863728e, __VMLINUX_SYMBOL_STR(soc_mbus_image_size) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x2d2dcca0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xed472295, __VMLINUX_SYMBOL_STR(i2c_get_adapter) },
	{ 0xeda13d45, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7ce6347e, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0x7bd69490, __VMLINUX_SYMBOL_STR(vb2_streamoff) },
	{ 0xf0a19636, __VMLINUX_SYMBOL_STR(v4l2_async_notifier_unregister) },
	{ 0x2441a547, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x97f26326, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xa88e96c2, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0x7e461a06, __VMLINUX_SYMBOL_STR(videobuf_streamoff) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-core,videobuf2-core,soc_mediabus,videobuf2-v4l2";

