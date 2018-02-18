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
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xed70f02a, __VMLINUX_SYMBOL_STR(drm_gem_prime_export) },
	{ 0x3349efff, __VMLINUX_SYMBOL_STR(drm_release) },
	{ 0xc60d0b67, __VMLINUX_SYMBOL_STR(drm_fb_helper_set_par) },
	{ 0x8124d5de, __VMLINUX_SYMBOL_STR(ttm_pool_populate) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xcf71c9ba, __VMLINUX_SYMBOL_STR(ttm_dma_tt_init) },
	{ 0x725a8ddd, __VMLINUX_SYMBOL_STR(drm_dev_register) },
	{ 0x4e0bea70, __VMLINUX_SYMBOL_STR(drm_atomic_helper_update_plane) },
	{ 0xb124482b, __VMLINUX_SYMBOL_STR(drm_atomic_helper_crtc_duplicate_state) },
	{ 0x8a2d86f5, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x90f50c13, __VMLINUX_SYMBOL_STR(drm_dev_alloc) },
	{ 0xf52b54c8, __VMLINUX_SYMBOL_STR(drm_fb_helper_initial_config) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x6579f854, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xe5c4bb71, __VMLINUX_SYMBOL_STR(drm_mode_config_cleanup) },
	{ 0xcfff77bf, __VMLINUX_SYMBOL_STR(drm_mode_config_reset) },
	{ 0x516bd07f, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_reset) },
	{ 0x7d0eba2b, __VMLINUX_SYMBOL_STR(drm_set_preferred_mode) },
	{ 0x5bc961d5, __VMLINUX_SYMBOL_STR(ttm_bo_validate) },
	{ 0xa947f2a5, __VMLINUX_SYMBOL_STR(ttm_bo_init) },
	{ 0x1e9058c5, __VMLINUX_SYMBOL_STR(drm_fb_helper_debug_leave) },
	{ 0x30e1899c, __VMLINUX_SYMBOL_STR(drm_cvt_mode) },
	{ 0x152d6c91, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xd9e45fab, __VMLINUX_SYMBOL_STR(get_task_comm) },
	{ 0xaaa13a94, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x346127a7, __VMLINUX_SYMBOL_STR(drm_global_item_ref) },
	{ 0xfc3908f5, __VMLINUX_SYMBOL_STR(fence_default_wait) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x3097fc4b, __VMLINUX_SYMBOL_STR(drm_kms_helper_hotplug_event) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x27dcdd3f, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0x5ffac64f, __VMLINUX_SYMBOL_STR(drm_dev_unref) },
	{ 0xc0f66d34, __VMLINUX_SYMBOL_STR(drm_encoder_init) },
	{ 0x5f9e3eea, __VMLINUX_SYMBOL_STR(drm_atomic_helper_crtc_reset) },
	{ 0xb8544515, __VMLINUX_SYMBOL_STR(drm_universal_plane_init) },
	{ 0x61c49186, __VMLINUX_SYMBOL_STR(drm_pci_set_busid) },
	{ 0x9ba45b72, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xae8eae1f, __VMLINUX_SYMBOL_STR(drm_connector_cleanup) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x66b195f3, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xb99ab20a, __VMLINUX_SYMBOL_STR(drm_fb_helper_unregister_fbi) },
	{ 0x4e1a38eb, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_duplicate_state) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x16600b02, __VMLINUX_SYMBOL_STR(drm_fb_helper_pan_display) },
	{ 0x683bd15a, __VMLINUX_SYMBOL_STR(ttm_mem_global_init) },
	{ 0xa9b0ccf6, __VMLINUX_SYMBOL_STR(drm_atomic_helper_set_config) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8b4e7450, __VMLINUX_SYMBOL_STR(ttm_mem_global_release) },
	{ 0xa776c9f6, __VMLINUX_SYMBOL_STR(drm_mode_connector_attach_encoder) },
	{ 0x4a315709, __VMLINUX_SYMBOL_STR(ttm_bo_unref) },
	{ 0x429be6d3, __VMLINUX_SYMBOL_STR(remove_conflicting_framebuffers) },
	{ 0x1d0b18a2, __VMLINUX_SYMBOL_STR(virtqueue_add_sgs) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xabfed723, __VMLINUX_SYMBOL_STR(ttm_bo_add_to_lru) },
	{ 0x23fd6c4e, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xeda005dd, __VMLINUX_SYMBOL_STR(drm_helper_mode_fill_fb_struct) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe0630c91, __VMLINUX_SYMBOL_STR(drm_crtc_init_with_planes) },
	{ 0x28446033, __VMLINUX_SYMBOL_STR(drm_put_dev) },
	{ 0xaf9d5675, __VMLINUX_SYMBOL_STR(drm_atomic_helper_plane_reset) },
	{ 0x7ba00036, __VMLINUX_SYMBOL_STR(drm_gem_handle_create) },
	{ 0xdacc77c5, __VMLINUX_SYMBOL_STR(ttm_bo_kmap) },
	{ 0x3882129d, __VMLINUX_SYMBOL_STR(drm_fb_helper_fill_var) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x29430981, __VMLINUX_SYMBOL_STR(virtqueue_disable_cb) },
	{ 0x665f50fa, __VMLINUX_SYMBOL_STR(drm_send_vblank_event) },
	{ 0x4babcf39, __VMLINUX_SYMBOL_STR(ttm_eu_fence_buffer_objects) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xe72407, __VMLINUX_SYMBOL_STR(drm_gem_object_release) },
	{ 0x7d2b8ffb, __VMLINUX_SYMBOL_STR(drm_read) },
	{ 0x9aea378c, __VMLINUX_SYMBOL_STR(ttm_bo_dma_acc_size) },
	{ 0x15934e80, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xb2542953, __VMLINUX_SYMBOL_STR(ttm_bo_init_mm) },
	{ 0xb93bf411, __VMLINUX_SYMBOL_STR(ttm_bo_wait) },
	{ 0xbfbcddf8, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x3c2e6dd1, __VMLINUX_SYMBOL_STR(ttm_bo_device_init) },
	{ 0x5aa90df1, __VMLINUX_SYMBOL_STR(drm_fb_helper_release_fbi) },
	{ 0xd85f6fba, __VMLINUX_SYMBOL_STR(drm_debugfs_create_files) },
	{ 0x1dd71f7a, __VMLINUX_SYMBOL_STR(drm_err) },
	{ 0xee156fa8, __VMLINUX_SYMBOL_STR(drm_connector_init) },
	{ 0xe927173c, __VMLINUX_SYMBOL_STR(drm_fb_helper_prepare) },
	{ 0x32907b91, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x20645642, __VMLINUX_SYMBOL_STR(drm_debug) },
	{ 0x7810a88b, __VMLINUX_SYMBOL_STR(fence_signal_locked) },
	{ 0x4ea1f5a2, __VMLINUX_SYMBOL_STR(drm_gem_object_free) },
	{ 0x67982c37, __VMLINUX_SYMBOL_STR(ttm_eu_backoff_reservation) },
	{ 0x8a727d99, __VMLINUX_SYMBOL_STR(virtqueue_get_vring_size) },
	{ 0xbb97d2b7, __VMLINUX_SYMBOL_STR(drm_gem_prime_fd_to_handle) },
	{ 0xbda9e3a1, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0xa6984754, __VMLINUX_SYMBOL_STR(drm_fb_helper_sys_imageblit) },
	{ 0x234061b4, __VMLINUX_SYMBOL_STR(drm_gem_prime_import) },
	{ 0xdcb7cab9, __VMLINUX_SYMBOL_STR(drm_atomic_helper_plane_duplicate_state) },
	{ 0xce00ec06, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_destroy_state) },
	{ 0x266a9484, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0xa4c2c7da, __VMLINUX_SYMBOL_STR(drm_atomic_helper_check) },
	{ 0x52ecd070, __VMLINUX_SYMBOL_STR(ttm_bo_del_sub_from_lru) },
	{ 0x91a697f4, __VMLINUX_SYMBOL_STR(drm_atomic_helper_commit) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4ff7839e, __VMLINUX_SYMBOL_STR(drm_fb_helper_check_var) },
	{ 0x59aa14cf, __VMLINUX_SYMBOL_STR(fence_release) },
	{ 0x1663f883, __VMLINUX_SYMBOL_STR(drm_fb_helper_blank) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xf455e2f7, __VMLINUX_SYMBOL_STR(drm_gem_object_lookup) },
	{ 0x5a0b9ca1, __VMLINUX_SYMBOL_STR(drm_gem_handle_delete) },
	{ 0x35b03b05, __VMLINUX_SYMBOL_STR(drm_add_modes_noedid) },
	{ 0x75be8c7f, __VMLINUX_SYMBOL_STR(ttm_eu_reserve_buffers) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb722c33a, __VMLINUX_SYMBOL_STR(drm_fb_helper_alloc_fbi) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xfbdadf27, __VMLINUX_SYMBOL_STR(reservation_object_add_excl_fence) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x869e6fe0, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_dpms) },
	{ 0x82cc5e0b, __VMLINUX_SYMBOL_STR(drm_gem_prime_handle_to_fd) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x247146a6, __VMLINUX_SYMBOL_STR(drm_connector_unregister) },
	{ 0x340607b7, __VMLINUX_SYMBOL_STR(drm_gem_object_init) },
	{ 0xfafd9e4, __VMLINUX_SYMBOL_STR(drm_encoder_cleanup) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xf4f79dc0, __VMLINUX_SYMBOL_STR(ttm_bo_device_release) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x66e247f5, __VMLINUX_SYMBOL_STR(drm_crtc_cleanup) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x28d6861d, __VMLINUX_SYMBOL_STR(__vmalloc) },
	{ 0x41e6224f, __VMLINUX_SYMBOL_STR(drm_atomic_helper_crtc_destroy_state) },
	{ 0xbfb08ca, __VMLINUX_SYMBOL_STR(drm_mode_config_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xff202973, __VMLINUX_SYMBOL_STR(ttm_dma_tt_fini) },
	{ 0xf3812ec2, __VMLINUX_SYMBOL_STR(drm_helper_hpd_irq_event) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x39fabd54, __VMLINUX_SYMBOL_STR(ww_mutex_unlock) },
	{ 0x1db7dc40, __VMLINUX_SYMBOL_STR(pgprot_kernel) },
	{ 0xef631f35, __VMLINUX_SYMBOL_STR(sg_alloc_table_from_pages) },
	{ 0x29785510, __VMLINUX_SYMBOL_STR(drm_debugfs_remove_files) },
	{ 0xcce04bc2, __VMLINUX_SYMBOL_STR(drm_fb_helper_fini) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x9cd60539, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0xa1041e7b, __VMLINUX_SYMBOL_STR(drm_atomic_helper_disable_plane) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xab0edab6, __VMLINUX_SYMBOL_STR(drm_fb_helper_sys_fillrect) },
	{ 0x5cf59609, __VMLINUX_SYMBOL_STR(ttm_bo_global_init) },
	{ 0x3150d644, __VMLINUX_SYMBOL_STR(drm_mode_probed_add) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xad66fd15, __VMLINUX_SYMBOL_STR(drm_fb_helper_setcmap) },
	{ 0xad24395f, __VMLINUX_SYMBOL_STR(drm_framebuffer_init) },
	{ 0x87003790, __VMLINUX_SYMBOL_STR(fence_init) },
	{ 0xc360e7e2, __VMLINUX_SYMBOL_STR(drm_ut_debug_printk) },
	{ 0x528d0c14, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0xf13d796f, __VMLINUX_SYMBOL_STR(ttm_pool_unpopulate) },
	{ 0xb997ed85, __VMLINUX_SYMBOL_STR(drm_fb_helper_sys_copyarea) },
	{ 0x67209414, __VMLINUX_SYMBOL_STR(drm_fb_helper_fill_fix) },
	{ 0x602653e1, __VMLINUX_SYMBOL_STR(drm_connector_register) },
	{ 0x3ac1fef9, __VMLINUX_SYMBOL_STR(drm_mode_legacy_fb_format) },
	{ 0x813321af, __VMLINUX_SYMBOL_STR(drm_helper_probe_single_connector_modes_nomerge) },
	{ 0xdc29f0d5, __VMLINUX_SYMBOL_STR(virtqueue_enable_cb) },
	{ 0xd9585d55, __VMLINUX_SYMBOL_STR(drm_mode_crtc_set_gamma_size) },
	{ 0x67b1d568, __VMLINUX_SYMBOL_STR(ttm_bo_global_release) },
	{ 0xedcab38, __VMLINUX_SYMBOL_STR(drm_fb_helper_debug_enter) },
	{ 0x9689b1c3, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0xb675052f, __VMLINUX_SYMBOL_STR(drm_fb_helper_init) },
	{ 0xc2a27a9b, __VMLINUX_SYMBOL_STR(drm_fb_helper_single_add_all_connectors) },
	{ 0x41e6c602, __VMLINUX_SYMBOL_STR(drm_open) },
	{ 0xfccafb1, __VMLINUX_SYMBOL_STR(drm_global_item_unref) },
	{ 0x6c6822ea, __VMLINUX_SYMBOL_STR(drm_atomic_helper_plane_destroy_state) },
	{ 0xbd704c1, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
	{ 0x6c21fc42, __VMLINUX_SYMBOL_STR(drm_framebuffer_cleanup) },
	{ 0xd16f3706, __VMLINUX_SYMBOL_STR(ttm_bo_mmap) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ttm";

MODULE_ALIAS("virtio:d00000010v*");
