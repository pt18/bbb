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
	{ 0x9c9ec2a0, __VMLINUX_SYMBOL_STR(proc_dointvec_minmax) },
	{ 0xe7b90c5c, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x858563a5, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xbb53c6ea, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x2d6507b5, __VMLINUX_SYMBOL_STR(_find_next_zero_bit_le) },
	{ 0x262f20a8, __VMLINUX_SYMBOL_STR(local_clock) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x367ba856, __VMLINUX_SYMBOL_STR(__crc32c_le_shift) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xeb1f57bc, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0x49045426, __VMLINUX_SYMBOL_STR(icmp_err_convert) },
	{ 0xd74289f9, __VMLINUX_SYMBOL_STR(__percpu_counter_add) },
	{ 0x8e9d326e, __VMLINUX_SYMBOL_STR(napi_by_id) },
	{ 0xcfefe1e, __VMLINUX_SYMBOL_STR(percpu_counter_destroy) },
	{ 0xaad0ae78, __VMLINUX_SYMBOL_STR(__bitmap_shift_right) },
	{ 0x84a83697, __VMLINUX_SYMBOL_STR(ip_getsockopt) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb85db57, __VMLINUX_SYMBOL_STR(ipv6_getsockopt) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x99319c25, __VMLINUX_SYMBOL_STR(ipv6_chk_addr) },
	{ 0x6c5e92d1, __VMLINUX_SYMBOL_STR(ip_setsockopt) },
	{ 0x46aacb3f, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0x98686048, __VMLINUX_SYMBOL_STR(inet6_add_protocol) },
	{ 0xf68285c0, __VMLINUX_SYMBOL_STR(register_inetaddr_notifier) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x9a44ae93, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x6e7f59e, __VMLINUX_SYMBOL_STR(send_sig) },
	{ 0x9e472f5f, __VMLINUX_SYMBOL_STR(snmp_fold_field) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x389207a0, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xe43274bc, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0xc8ed5ccd, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x83caeed5, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xf6fd3edd, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xf20551bd, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xf0270d0e, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0xaaa13a94, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x1c23b60f, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x60352082, __VMLINUX_SYMBOL_STR(register_inet6addr_notifier) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x685dc3f3, __VMLINUX_SYMBOL_STR(ipv6_dup_options) },
	{ 0xa843805a, __VMLINUX_SYMBOL_STR(get_unused_fd_flags) },
	{ 0x6dc39bc, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x9dbb75dc, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0x2c988955, __VMLINUX_SYMBOL_STR(prepare_to_wait_exclusive) },
	{ 0xbe7055b, __VMLINUX_SYMBOL_STR(inet6_release) },
	{ 0xb0d888b, __VMLINUX_SYMBOL_STR(icmpv6_err_convert) },
	{ 0xfb9b61db, __VMLINUX_SYMBOL_STR(inet6_register_protosw) },
	{ 0x9fb84aff, __VMLINUX_SYMBOL_STR(__skb_checksum) },
	{ 0xb90115ab, __VMLINUX_SYMBOL_STR(skb_set_owner_w) },
	{ 0x7c67d734, __VMLINUX_SYMBOL_STR(inet_del_protocol) },
	{ 0x11ec0e3e, __VMLINUX_SYMBOL_STR(ip6_xmit) },
	{ 0x8f0b2c8c, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0xd4222a90, __VMLINUX_SYMBOL_STR(inet6_getname) },
	{ 0x27000b29, __VMLINUX_SYMBOL_STR(crc32c) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb0a2218, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x2bf29edb, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x68e5a0c1, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xb490ae47, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0xde9360ba, __VMLINUX_SYMBOL_STR(totalram_pages) },
	{ 0xb6f3a8cc, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0xc4ef99f8, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xe809ee90, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xe06141e9, __VMLINUX_SYMBOL_STR(security_sk_clone) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x267cb8a7, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x2fe252cc, __VMLINUX_SYMBOL_STR(unregister_inet6addr_notifier) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4c504b72, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x8e6ac278, __VMLINUX_SYMBOL_STR(ip6_dst_lookup_flow) },
	{ 0x1885258d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xed53289c, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xe7075b97, __VMLINUX_SYMBOL_STR(idr_alloc_cyclic) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xf4aa836d, __VMLINUX_SYMBOL_STR(single_open_net) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x6106fd2a, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0xaa51df24, __VMLINUX_SYMBOL_STR(inet6_ioctl) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x79e89bcb, __VMLINUX_SYMBOL_STR(inet_addr_type) },
	{ 0xb803321b, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x5c54b7e6, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x9be13785, __VMLINUX_SYMBOL_STR(sock_prot_inuse_add) },
	{ 0x7dccc294, __VMLINUX_SYMBOL_STR(proc_doulongvec_minmax) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xffb74af4, __VMLINUX_SYMBOL_STR(fl6_update_dst) },
	{ 0xccae0257, __VMLINUX_SYMBOL_STR(__sk_mem_reclaim) },
	{ 0x7621ab43, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x28ac21e0, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xd100acbd, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0xd86f5381, __VMLINUX_SYMBOL_STR(proc_mkdir_data) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x6a13def7, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x7e0a36a6, __VMLINUX_SYMBOL_STR(sock_wake_async) },
	{ 0xbf842eae, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x6f9c94c6, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x68e447fb, __VMLINUX_SYMBOL_STR(inet_add_protocol) },
	{ 0x25969ee9, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x5240ee7, __VMLINUX_SYMBOL_STR(percpu_counter_batch) },
	{ 0x3577fc2c, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xf637383d, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xe9687eb8, __VMLINUX_SYMBOL_STR(inet_accept) },
	{ 0x2e064e03, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x32c6539c, __VMLINUX_SYMBOL_STR(sk_filter_trim_cap) },
	{ 0xeed3635b, __VMLINUX_SYMBOL_STR(proc_dostring) },
	{ 0x787cd477, __VMLINUX_SYMBOL_STR(inet_ioctl) },
	{ 0xc1a205f4, __VMLINUX_SYMBOL_STR(inet_ctl_sock_create) },
	{ 0x32907b91, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xfab242bb, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0x2babe81f, __VMLINUX_SYMBOL_STR(__wake_up_sync_key) },
	{ 0xbc1fb435, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x71314b04, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x3621cbb8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xb5684e29, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x1adc358d, __VMLINUX_SYMBOL_STR(inet_release) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x37788cf4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xfe029963, __VMLINUX_SYMBOL_STR(unregister_inetaddr_notifier) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x54e6fcdd, __VMLINUX_SYMBOL_STR(net_enable_timestamp) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x844c5263, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x552b0d28, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x3db5ea4f, __VMLINUX_SYMBOL_STR(inet_getname) },
	{ 0x76c51e39, __VMLINUX_SYMBOL_STR(inet6_del_protocol) },
	{ 0xd2d5ed59, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xfcee237b, __VMLINUX_SYMBOL_STR(inet_sock_destruct) },
	{ 0x1e579dc5, __VMLINUX_SYMBOL_STR(__list_add_rcu) },
	{ 0xd842f3ec, __VMLINUX_SYMBOL_STR(put_cmsg) },
	{ 0x5fd9b2f, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x3f4547a7, __VMLINUX_SYMBOL_STR(put_unused_fd) },
	{ 0xef2fdc4f, __VMLINUX_SYMBOL_STR(__percpu_counter_init) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xe9c63e95, __VMLINUX_SYMBOL_STR(sock_alloc_file) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xca8db2c8, __VMLINUX_SYMBOL_STR(ipv6_setsockopt) },
	{ 0xc15f3c66, __VMLINUX_SYMBOL_STR(__sk_mem_schedule) },
	{ 0x2a5a9212, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x16cb9ead, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xa508c5e1, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0xf02d1a74, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x6f3634f5, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x4868e84f, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0xa8bbff13, __VMLINUX_SYMBOL_STR(in6_dev_finish_destroy) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x8f53584d, __VMLINUX_SYMBOL_STR(inet_register_protosw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x67d435fd, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xd6703119, __VMLINUX_SYMBOL_STR(fd_install) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xe7c730d7, __VMLINUX_SYMBOL_STR(sock_create) },
	{ 0x16fdd531, __VMLINUX_SYMBOL_STR(inet_bind) },
	{ 0x3a6add0e, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0xc2346df4, __VMLINUX_SYMBOL_STR(__ip_dev_find) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xb1d96cae, __VMLINUX_SYMBOL_STR(inet6_unregister_protosw) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0xfb53097a, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xd3bbafc0, __VMLINUX_SYMBOL_STR(inet6_bind) },
	{ 0xef9d84c3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x528d0c14, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0x13972bd3, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x37dc00f9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x57fd2efa, __VMLINUX_SYMBOL_STR(ip_queue_xmit) },
	{ 0xdd1dc93a, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x2904c1ca, __VMLINUX_SYMBOL_STR(sock_wfree) },
	{ 0x71fff12d, __VMLINUX_SYMBOL_STR(inet_unregister_protosw) },
	{ 0xe067b136, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x27fa66e1, __VMLINUX_SYMBOL_STR(nr_free_buffer_pages) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x46625f9c, __VMLINUX_SYMBOL_STR(inet_get_local_port_range) },
	{ 0xab6a94e5, __VMLINUX_SYMBOL_STR(sock_i_uid) },
	{ 0x3dfe47ec, __VMLINUX_SYMBOL_STR(single_release_net) },
	{ 0xfaeea474, __VMLINUX_SYMBOL_STR(inet6_destroy_sock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

