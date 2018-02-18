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
	{ 0x92a8eef4, __VMLINUX_SYMBOL_STR(rt2x00usb_resume) },
	{ 0x725bbb77, __VMLINUX_SYMBOL_STR(rt2x00usb_suspend) },
	{ 0x12cfd8ed, __VMLINUX_SYMBOL_STR(rt2x00usb_disconnect) },
	{ 0x50a0deed, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0x243de6e2, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0x8b6b1e7d, __VMLINUX_SYMBOL_STR(rt2x00mac_get_antenna) },
	{ 0xe53b3649, __VMLINUX_SYMBOL_STR(rt2x00mac_set_antenna) },
	{ 0xf14a982f, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0x44af2baa, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0x5afd7d1f, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0x2487dd00, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0x437b292f, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0x82968550, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0xe395c027, __VMLINUX_SYMBOL_STR(rt2x00mac_set_key) },
	{ 0xb38b6704, __VMLINUX_SYMBOL_STR(rt2x00mac_set_tim) },
	{ 0xee9dab45, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0x541643ff, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0x6b8754d1, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0x6dc633f2, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0x69ebc4d6, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0x3823ee9a, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0x306faf17, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0xf41b0356, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0x918f4e52, __VMLINUX_SYMBOL_STR(rt2x00usb_flush_queue) },
	{ 0x1fc296ad, __VMLINUX_SYMBOL_STR(rt2x00usb_kick_queue) },
	{ 0x1aedb5f3, __VMLINUX_SYMBOL_STR(rt2x00usb_watchdog) },
	{ 0x1b4c03df, __VMLINUX_SYMBOL_STR(rt2x00usb_clear_entry) },
	{ 0x2c05971, __VMLINUX_SYMBOL_STR(rt2x00usb_uninitialize) },
	{ 0x6e2a121c, __VMLINUX_SYMBOL_STR(rt2x00usb_initialize) },
	{ 0x3683ad6f, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x30d3518a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x485ec4d6, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf8625e4e, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2ec0ba1b, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request) },
	{ 0xbf5827a6, __VMLINUX_SYMBOL_STR(rt2x00usb_disable_radio) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5adeb95d, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x70330ff9, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_req_buff_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xef9d84c3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x9bed5a53, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x28ac21e0, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x68e5a0c1, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf099e8ab, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request_buff) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x8c6c8291, __VMLINUX_SYMBOL_STR(rt2x00usb_probe) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00usb,rt2x00lib";

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6B90FF814E9ED16BAB14799");
