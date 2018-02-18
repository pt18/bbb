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
	{ 0x81854bb8, __VMLINUX_SYMBOL_STR(unregister_qdisc) },
	{ 0x4ddcfdf, __VMLINUX_SYMBOL_STR(register_qdisc) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x8165de8a, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x68e5a0c1, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xd845cf95, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xcd625c00, __VMLINUX_SYMBOL_STR(gnet_stats_copy_queue) },
	{ 0x63bbf1de, __VMLINUX_SYMBOL_STR(gnet_stats_copy_basic) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x60b25ff7, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x53f19b75, __VMLINUX_SYMBOL_STR(tc_classify) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x2f461962, __VMLINUX_SYMBOL_STR(qdisc_create_dflt) },
	{ 0x77e90aa1, __VMLINUX_SYMBOL_STR(pfifo_qdisc_ops) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xef9d84c3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x6fdcfed0, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x28ac21e0, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x3577fc2c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x30429397, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0x8a6f6d2e, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e064e03, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xd940d57d, __VMLINUX_SYMBOL_STR(tcf_destroy_chain) },
	{ 0xcf13ed40, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";
