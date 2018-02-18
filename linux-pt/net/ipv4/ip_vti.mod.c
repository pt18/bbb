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
	{ 0x9d4d1434, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0xe6d4f896, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0x4edfb93d, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0x63a241b4, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0xf88dff7, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0xd785bd84, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0x6657736, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xcbddb60e, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xdddb2ab2, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0xe77e5877, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x5c11be01, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0xd6a508ac, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xda78ebcd, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0xf6d2fc6f, __VMLINUX_SYMBOL_STR(xfrm_garbage_collect) },
	{ 0x8399cdd0, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0xcf7a114c, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0x6f3634f5, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0xafcf1265, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x929da45d, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x774c87ee, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x1dc23e75, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x3c31e96, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0x95d434d0, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0xd417a051, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x83caeed5, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xbe7fbcfd, __VMLINUX_SYMBOL_STR(xfrm_lookup) },
	{ 0xef9d84c3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xc68941ff, __VMLINUX_SYMBOL_STR(__xfrm_decode_session) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xe93ffab7, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x91c3ca9f, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0xd5532591, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0xe255814e, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel";

