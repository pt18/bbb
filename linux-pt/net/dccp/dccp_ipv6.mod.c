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
	{ 0x59814a84, __VMLINUX_SYMBOL_STR(dccp_statistics) },
	{ 0xc65f4a23, __VMLINUX_SYMBOL_STR(dccp_init_sock) },
	{ 0xd9516bd3, __VMLINUX_SYMBOL_STR(__kfree_skb) },
	{ 0x9f941527, __VMLINUX_SYMBOL_STR(dccp_v4_do_rcv) },
	{ 0xd63ed501, __VMLINUX_SYMBOL_STR(inet6_csk_update_pmtu) },
	{ 0xfc80bf83, __VMLINUX_SYMBOL_STR(dccp_set_state) },
	{ 0x7ef61a7, __VMLINUX_SYMBOL_STR(inet6_csk_bind_conflict) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb85db57, __VMLINUX_SYMBOL_STR(ipv6_getsockopt) },
	{ 0x7af6ec86, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0xd16b11, __VMLINUX_SYMBOL_STR(inet_twsk_put) },
	{ 0xb0596156, __VMLINUX_SYMBOL_STR(dccp_hashinfo) },
	{ 0x98686048, __VMLINUX_SYMBOL_STR(inet6_add_protocol) },
	{ 0xa837bc7b, __VMLINUX_SYMBOL_STR(inet6_lookup_listener) },
	{ 0x7972641b, __VMLINUX_SYMBOL_STR(dccp_sendmsg) },
	{ 0xcaf2b309, __VMLINUX_SYMBOL_STR(ipv6_opt_accepted) },
	{ 0x6e0104d7, __VMLINUX_SYMBOL_STR(sk_setup_caps) },
	{ 0x9228cf4d, __VMLINUX_SYMBOL_STR(dccp_ctl_make_reset) },
	{ 0xe2971407, __VMLINUX_SYMBOL_STR(dccp_destroy_sock) },
	{ 0x39851b65, __VMLINUX_SYMBOL_STR(dccp_make_response) },
	{ 0xc8ed5ccd, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0x83caeed5, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xf6fd3edd, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x172738bc, __VMLINUX_SYMBOL_STR(dccp_rcv_established) },
	{ 0x914e37f7, __VMLINUX_SYMBOL_STR(dccp_req_err) },
	{ 0xb0b4d158, __VMLINUX_SYMBOL_STR(security_skb_classify_flow) },
	{ 0x3397ae16, __VMLINUX_SYMBOL_STR(dccp_v4_conn_request) },
	{ 0x34b92beb, __VMLINUX_SYMBOL_STR(inet_csk_prepare_forced_close) },
	{ 0xad9c80b1, __VMLINUX_SYMBOL_STR(dccp_create_openreq_child) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x685dc3f3, __VMLINUX_SYMBOL_STR(ipv6_dup_options) },
	{ 0x2e4725b3, __VMLINUX_SYMBOL_STR(dccp_check_req) },
	{ 0x9dbb75dc, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0xbe7055b, __VMLINUX_SYMBOL_STR(inet6_release) },
	{ 0xb0d888b, __VMLINUX_SYMBOL_STR(icmpv6_err_convert) },
	{ 0xfb9b61db, __VMLINUX_SYMBOL_STR(inet6_register_protosw) },
	{ 0xb993b0f3, __VMLINUX_SYMBOL_STR(dccp_recvmsg) },
	{ 0x11ec0e3e, __VMLINUX_SYMBOL_STR(ip6_xmit) },
	{ 0x6d59ea66, __VMLINUX_SYMBOL_STR(inet_sk_rebuild_header) },
	{ 0xd4222a90, __VMLINUX_SYMBOL_STR(inet6_getname) },
	{ 0x371d491d, __VMLINUX_SYMBOL_STR(sock_rfree) },
	{ 0x37e1c561, __VMLINUX_SYMBOL_STR(inet6_csk_xmit) },
	{ 0xfa292346, __VMLINUX_SYMBOL_STR(dccp_ioctl) },
	{ 0x52405baf, __VMLINUX_SYMBOL_STR(dccp_setsockopt) },
	{ 0xb6f3a8cc, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0xc4ef99f8, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x7e078c01, __VMLINUX_SYMBOL_STR(dccp_child_process) },
	{ 0x267cb8a7, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4c504b72, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xb428c2f6, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0x8e6ac278, __VMLINUX_SYMBOL_STR(ip6_dst_lookup_flow) },
	{ 0x1885258d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xff4a2133, __VMLINUX_SYMBOL_STR(__inet6_lookup_established) },
	{ 0xf7066ad, __VMLINUX_SYMBOL_STR(dccp_v4_request_recv_sock) },
	{ 0x710d755e, __VMLINUX_SYMBOL_STR(dccp_parse_options) },
	{ 0x21c92e4e, __VMLINUX_SYMBOL_STR(dccp_getsockopt) },
	{ 0xc2a7502f, __VMLINUX_SYMBOL_STR(security_sk_classify_flow) },
	{ 0xaa51df24, __VMLINUX_SYMBOL_STR(inet6_ioctl) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xce0f230c, __VMLINUX_SYMBOL_STR(inet6_csk_route_req) },
	{ 0x655def08, __VMLINUX_SYMBOL_STR(fl6_sock_lookup) },
	{ 0xffb74af4, __VMLINUX_SYMBOL_STR(fl6_update_dst) },
	{ 0x7621ab43, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe6ff079e, __VMLINUX_SYMBOL_STR(dccp_reqsk_init) },
	{ 0x98db14d5, __VMLINUX_SYMBOL_STR(dccp_close) },
	{ 0xbf842eae, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x6f9c94c6, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x9a123b7, __VMLINUX_SYMBOL_STR(dccp_orphan_count) },
	{ 0x497018ad, __VMLINUX_SYMBOL_STR(dccp_sync_mss) },
	{ 0x6bca2a1e, __VMLINUX_SYMBOL_STR(inet6_hash_connect) },
	{ 0xe9687eb8, __VMLINUX_SYMBOL_STR(inet_accept) },
	{ 0xfdbbd386, __VMLINUX_SYMBOL_STR(inet_csk_reqsk_queue_drop_and_put) },
	{ 0x32c6539c, __VMLINUX_SYMBOL_STR(sk_filter_trim_cap) },
	{ 0x3ce7dbd3, __VMLINUX_SYMBOL_STR(inet_csk_get_port) },
	{ 0x14b80968, __VMLINUX_SYMBOL_STR(dccp_death_row) },
	{ 0xc1a205f4, __VMLINUX_SYMBOL_STR(inet_ctl_sock_create) },
	{ 0x8698fc78, __VMLINUX_SYMBOL_STR(dccp_poll) },
	{ 0x475adf, __VMLINUX_SYMBOL_STR(inet_hash) },
	{ 0x71314b04, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x5b59d33b, __VMLINUX_SYMBOL_STR(dccp_disconnect) },
	{ 0xb43b38e3, __VMLINUX_SYMBOL_STR(__sk_dst_check) },
	{ 0x43c15b23, __VMLINUX_SYMBOL_STR(dccp_done) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6b2a3112, __VMLINUX_SYMBOL_STR(inet_reqsk_alloc) },
	{ 0x8373682d, __VMLINUX_SYMBOL_STR(dccp_v4_send_check) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x552b0d28, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x6b542ada, __VMLINUX_SYMBOL_STR(inet_stream_connect) },
	{ 0xdb2a7d9a, __VMLINUX_SYMBOL_STR(dccp_invalid_packet) },
	{ 0x76c51e39, __VMLINUX_SYMBOL_STR(inet6_del_protocol) },
	{ 0x39d32af0, __VMLINUX_SYMBOL_STR(inet_ehash_nolisten) },
	{ 0x5fd9b2f, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x4cdd391d, __VMLINUX_SYMBOL_STR(dccp_feat_list_purge) },
	{ 0xcba5f6db, __VMLINUX_SYMBOL_STR(dccp_syn_ack_timeout) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd170a69b, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x6b3db47a, __VMLINUX_SYMBOL_STR(inet_csk_reqsk_queue_hash_add) },
	{ 0xca8db2c8, __VMLINUX_SYMBOL_STR(ipv6_setsockopt) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xa508c5e1, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0x9ec66771, __VMLINUX_SYMBOL_STR(inet6_sk_rebuild_header) },
	{ 0x6f3634f5, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0x20ecd82f, __VMLINUX_SYMBOL_STR(security_req_classify_flow) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe1761617, __VMLINUX_SYMBOL_STR(security_inet_conn_request) },
	{ 0x6bb9abde, __VMLINUX_SYMBOL_STR(inet_dccp_listen) },
	{ 0x865c2aec, __VMLINUX_SYMBOL_STR(__inet_inherit_port) },
	{ 0x3a6add0e, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0xe200f872, __VMLINUX_SYMBOL_STR(secure_dccpv6_sequence_number) },
	{ 0xb1d96cae, __VMLINUX_SYMBOL_STR(inet6_unregister_protosw) },
	{ 0x1930775a, __VMLINUX_SYMBOL_STR(inet_csk_accept) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xd3bbafc0, __VMLINUX_SYMBOL_STR(inet6_bind) },
	{ 0xd8ee5eaf, __VMLINUX_SYMBOL_STR(dccp_reqsk_send_ack) },
	{ 0xebb6a21a, __VMLINUX_SYMBOL_STR(dccp_rcv_state_process) },
	{ 0xef9d84c3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xba33dbbe, __VMLINUX_SYMBOL_STR(dccp_connect) },
	{ 0x3009ebcf, __VMLINUX_SYMBOL_STR(dccp_shutdown) },
	{ 0x57fd2efa, __VMLINUX_SYMBOL_STR(ip_queue_xmit) },
	{ 0x7b9989f2, __VMLINUX_SYMBOL_STR(dccp_v4_connect) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xfbc6ffc1, __VMLINUX_SYMBOL_STR(inet6_csk_addr2sockaddr) },
	{ 0xfaeea474, __VMLINUX_SYMBOL_STR(inet6_destroy_sock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dccp,dccp_ipv4";

