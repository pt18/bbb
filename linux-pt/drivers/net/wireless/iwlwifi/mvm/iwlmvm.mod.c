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
	{ 0x151bf8c7, __VMLINUX_SYMBOL_STR(iwl_phy_db_init) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x3a653542, __VMLINUX_SYMBOL_STR(ieee80211_rx_napi) },
	{ 0x92b57248, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x806b6bfe, __VMLINUX_SYMBOL_STR(ieee80211_csa_finish) },
	{ 0xe03f6b2b, __VMLINUX_SYMBOL_STR(__iwl_err) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x8d395ced, __VMLINUX_SYMBOL_STR(iwl_nvm_check_version) },
	{ 0xd73416a3, __VMLINUX_SYMBOL_STR(iwl_parse_nvm_data) },
	{ 0x9c77eed0, __VMLINUX_SYMBOL_STR(iwl_remove_notification) },
	{ 0x6579f854, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xbc764036, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_rtnl) },
	{ 0xdda18ab7, __VMLINUX_SYMBOL_STR(regulatory_set_wiphy_regd) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xeb6d7c6c, __VMLINUX_SYMBOL_STR(ieee80211_ie_split) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x134bb9b3, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xd8a7658c, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x6edbe093, __VMLINUX_SYMBOL_STR(ieee80211_csa_is_complete) },
	{ 0x4e521aad, __VMLINUX_SYMBOL_STR(ieee80211_request_smps) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x39a0686a, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x7272c3c8, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x300e37c4, __VMLINUX_SYMBOL_STR(ieee80211_cqm_rssi_notify) },
	{ 0x3f3bba92, __VMLINUX_SYMBOL_STR(ieee80211_tdls_oper_request) },
	{ 0xefc56354, __VMLINUX_SYMBOL_STR(cfg80211_chandef_create) },
	{ 0x220000a3, __VMLINUX_SYMBOL_STR(iwl_set_bits_prph) },
	{ 0xa9fc982f, __VMLINUX_SYMBOL_STR(iwl_phy_db_set_section) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xd140c805, __VMLINUX_SYMBOL_STR(iwl_set_bits_mask_prph) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xf20551bd, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xb8c9a849, __VMLINUX_SYMBOL_STR(iwl_opmode_register) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xff77399c, __VMLINUX_SYMBOL_STR(ieee80211_csa_update_counter) },
	{ 0xca4df9c7, __VMLINUX_SYMBOL_STR(iwl_clear_bits_prph) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x68f63a2, __VMLINUX_SYMBOL_STR(ieee80211_resume_disconnect) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xdac8d71b, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0xaff7549d, __VMLINUX_SYMBOL_STR(dev_coredumpm) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa141efdf, __VMLINUX_SYMBOL_STR(rate_control_send_low) },
	{ 0x6dc39bc, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x60371cd2, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0x8fbd2da8, __VMLINUX_SYMBOL_STR(ieee80211_scan_completed) },
	{ 0x437071f4, __VMLINUX_SYMBOL_STR(ieee80211_data_to_8023) },
	{ 0x109405e6, __VMLINUX_SYMBOL_STR(ieee80211_sched_scan_results) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xe319fa2b, __VMLINUX_SYMBOL_STR(iwl_wait_notification) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x442a091f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x69de096c, __VMLINUX_SYMBOL_STR(ieee80211_get_tkip_rx_p1k) },
	{ 0x61e54eca, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0xf446f103, __VMLINUX_SYMBOL_STR(ieee80211_ready_on_channel) },
	{ 0xc876614, __VMLINUX_SYMBOL_STR(iwl_read_prph) },
	{ 0x39ade1bd, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0x3b0c08b4, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xefb7bae8, __VMLINUX_SYMBOL_STR(__iwl_dbg) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x98e68eca, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x49b542fb, __VMLINUX_SYMBOL_STR(iwl_init_notification_wait) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x2dc264c0, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe5cfb991, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xe52f6f54, __VMLINUX_SYMBOL_STR(iwl_parse_nvm_mcc_info) },
	{ 0x9ede606a, __VMLINUX_SYMBOL_STR(ieee80211_rate_control_register) },
	{ 0x5778a5d6, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_template) },
	{ 0x1a1c4082, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0x5ab85e97, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x17a36b36, __VMLINUX_SYMBOL_STR(iwl_write32) },
	{ 0x7621ab43, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x93f18430, __VMLINUX_SYMBOL_STR(iwl_write_prph) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6d06cb7b, __VMLINUX_SYMBOL_STR(ieee80211_remain_on_channel_expired) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xf1969a8e, __VMLINUX_SYMBOL_STR(__usecs_to_jiffies) },
	{ 0xd9840c2f, __VMLINUX_SYMBOL_STR(ieee80211_sta_block_awake) },
	{ 0x9f9dfdff, __VMLINUX_SYMBOL_STR(ieee80211_find_sta_by_ifaddr) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xdc3fcbc9, __VMLINUX_SYMBOL_STR(__sw_hweight8) },
	{ 0xb6a68816, __VMLINUX_SYMBOL_STR(find_last_bit) },
	{ 0x74b7d178, __VMLINUX_SYMBOL_STR(ieee80211_reserve_tid) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xccb2439f, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x14f3c2dd, __VMLINUX_SYMBOL_STR(regulatory_set_wiphy_regd_sync_rtnl) },
	{ 0xebe60612, __VMLINUX_SYMBOL_STR(ieee80211_gtk_rekey_add) },
	{ 0x8458f70b, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x9b6eb137, __VMLINUX_SYMBOL_STR(ksize) },
	{ 0xe9b7ad72, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x301516f5, __VMLINUX_SYMBOL_STR(ieee80211_remove_key) },
	{ 0xb293a2c0, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0x691274c3, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x51b657cd, __VMLINUX_SYMBOL_STR(iwlwifi_mod_params) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x3621cbb8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x568e5a7b, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x37788cf4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xf9fa191d, __VMLINUX_SYMBOL_STR(ieee80211_set_key_rx_seq) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xcff84f99, __VMLINUX_SYMBOL_STR(__iwl_info) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x602c34c4, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x739fea90, __VMLINUX_SYMBOL_STR(ieee80211_sta_set_buffered) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xec89d25e, __VMLINUX_SYMBOL_STR(device_reprobe) },
	{ 0x76b9ef28, __VMLINUX_SYMBOL_STR(ieee80211_get_key_rx_seq) },
	{ 0xabfcb4c3, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0x38a1e9d2, __VMLINUX_SYMBOL_STR(ieee80211_iter_keys) },
	{ 0xc28b7011, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0xec694dc5, __VMLINUX_SYMBOL_STR(__iwl_warn) },
	{ 0xb1aaef91, __VMLINUX_SYMBOL_STR(ieee80211_get_key_tx_seq) },
	{ 0x35033c81, __VMLINUX_SYMBOL_STR(iwl_phy_db_free) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x5a10d898, __VMLINUX_SYMBOL_STR(iwl_abort_notification_waits) },
	{ 0xf1e1ef83, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0x7afa89fc, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x26bb7eb8, __VMLINUX_SYMBOL_STR(__tracepoint_iwlwifi_dev_ucode_error) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5c52e109, __VMLINUX_SYMBOL_STR(iwl_opmode_deregister) },
	{ 0x81c2c0ab, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0x1f00ab86, __VMLINUX_SYMBOL_STR(ieee80211_rate_control_unregister) },
	{ 0x146c7d38, __VMLINUX_SYMBOL_STR(ieee80211_sta_eosp) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x31dcba47, __VMLINUX_SYMBOL_STR(ieee80211_restart_hw) },
	{ 0xf67a2ce5, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x315102e3, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x362e05a6, __VMLINUX_SYMBOL_STR(ieee80211_beacon_loss) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x401443d1, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_session) },
	{ 0xc035bde6, __VMLINUX_SYMBOL_STR(skb_add_rx_frag) },
	{ 0xaa6fb725, __VMLINUX_SYMBOL_STR(ieee80211_iterate_stations_atomic) },
	{ 0x22eedd77, __VMLINUX_SYMBOL_STR(ieee80211_get_tkip_p2k) },
	{ 0x90a46b77, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x123d0d7d, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x776221bf, __VMLINUX_SYMBOL_STR(iwl_send_phy_db_data) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xef9d84c3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x49133568, __VMLINUX_SYMBOL_STR(ieee80211_unreserve_tid) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x194202ee, __VMLINUX_SYMBOL_STR(iwl_notification_wait_init) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x37dc00f9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x3fe4b7fb, __VMLINUX_SYMBOL_STR(ieee80211_chswitch_done) },
	{ 0xa7e88435, __VMLINUX_SYMBOL_STR(ieee80211_sched_scan_stopped) },
	{ 0xdea3edb7, __VMLINUX_SYMBOL_STR(ieee80211_iterate_interfaces) },
	{ 0x3642a302, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xad0efcfd, __VMLINUX_SYMBOL_STR(ieee80211_set_key_tx_seq) },
	{ 0x97aa0241, __VMLINUX_SYMBOL_STR(ieee80211_report_wowlan_wakeup) },
	{ 0xc15ab1f6, __VMLINUX_SYMBOL_STR(ieee80211_connection_loss) },
	{ 0xf1dd43e1, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0x16474139, __VMLINUX_SYMBOL_STR(iwl_notification_wait_notify) },
	{ 0x97f26326, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x2166686, __VMLINUX_SYMBOL_STR(ieee80211_get_tkip_p1k_iv) },
	{ 0xb242a72a, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0x25eab39, __VMLINUX_SYMBOL_STR(ieee80211_gtk_rekey_notify) },
	{ 0x13f8ab78, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_session) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=iwlwifi,mac80211,cfg80211";

