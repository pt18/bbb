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
	{ 0x6dc39bc, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x918a0c49, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x2441a547, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x2d2dcca0, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x129f3122, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x5e8fbd05, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0x164439fa, __VMLINUX_SYMBOL_STR(vb2_dma_contig_memops) },
	{ 0xc2f3f312, __VMLINUX_SYMBOL_STR(v4l2_m2m_get_vq) },
	{ 0xbc924ae, __VMLINUX_SYMBOL_STR(v4l2_m2m_ctx_init) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x17eb0eee, __VMLINUX_SYMBOL_STR(v4l2_m2m_init) },
	{ 0x841b575e, __VMLINUX_SYMBOL_STR(vb2_dma_contig_init_ctx) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xea96fc21, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xf06a15bc, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x5dfcaae4, __VMLINUX_SYMBOL_STR(__dma_request_channel) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x8d3060dd, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x6093792, __VMLINUX_SYMBOL_STR(v4l2_m2m_poll) },
	{ 0x69445a79, __VMLINUX_SYMBOL_STR(v4l2_m2m_mmap) },
	{ 0x144a6054, __VMLINUX_SYMBOL_STR(v4l2_m2m_buf_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x50dcdb9b, __VMLINUX_SYMBOL_STR(v4l2_m2m_ctx_release) },
	{ 0x7be9c4c1, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xffa695d8, __VMLINUX_SYMBOL_STR(v4l2_m2m_reqbufs) },
	{ 0x701ca6b4, __VMLINUX_SYMBOL_STR(v4l2_m2m_querybuf) },
	{ 0x7275f218, __VMLINUX_SYMBOL_STR(v4l2_m2m_qbuf) },
	{ 0x4b42060e, __VMLINUX_SYMBOL_STR(v4l2_m2m_dqbuf) },
	{ 0x8d7ea6c6, __VMLINUX_SYMBOL_STR(v4l2_m2m_streamon) },
	{ 0x53f1e787, __VMLINUX_SYMBOL_STR(v4l2_m2m_streamoff) },
	{ 0x18b5223a, __VMLINUX_SYMBOL_STR(vb2_plane_cookie) },
	{ 0x856358c2, __VMLINUX_SYMBOL_STR(v4l2_m2m_next_buf) },
	{ 0xf1bbcbac, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x6c0046e7, __VMLINUX_SYMBOL_STR(v4l2_m2m_buf_remove) },
	{ 0x9980b668, __VMLINUX_SYMBOL_STR(v4l2_m2m_job_finish) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x52308b55, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0xe57f0426, __VMLINUX_SYMBOL_STR(vb2_dma_contig_cleanup_ctx) },
	{ 0x69209cce, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x5f969406, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xc6fca5ad, __VMLINUX_SYMBOL_STR(v4l2_m2m_release) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videobuf2-dma-contig,v4l2-mem2mem,videobuf2-core";


MODULE_INFO(srcversion, "00D5D541B7BC87753FA98C7");
