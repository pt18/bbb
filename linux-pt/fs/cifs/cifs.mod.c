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
	{ 0xb4d7dfb, __VMLINUX_SYMBOL_STR(request_key) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xbbc3cf35, __VMLINUX_SYMBOL_STR(__fscache_acquire_cookie) },
	{ 0x9a1dfd65, __VMLINUX_SYMBOL_STR(strpbrk) },
	{ 0xbb53c6ea, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x28fa17bf, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x5a04785, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0xa675804c, __VMLINUX_SYMBOL_STR(utf8s_to_utf16s) },
	{ 0x40f9d070, __VMLINUX_SYMBOL_STR(set_anon_super) },
	{ 0x6a112424, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x455829fd, __VMLINUX_SYMBOL_STR(unload_nls) },
	{ 0x64c72835, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0xac1bbfab, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xac20d157, __VMLINUX_SYMBOL_STR(__fscache_wait_on_page_write) },
	{ 0x208b525d, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x32820051, __VMLINUX_SYMBOL_STR(d_invalidate) },
	{ 0xc4afee27, __VMLINUX_SYMBOL_STR(__set_page_dirty_nobuffers) },
	{ 0xf670e952, __VMLINUX_SYMBOL_STR(key_invalidate) },
	{ 0x8d11c9d0, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0x1a90f0c3, __VMLINUX_SYMBOL_STR(filemap_fault) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x47dbbddd, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x486f645d, __VMLINUX_SYMBOL_STR(mntget) },
	{ 0x612315df, __VMLINUX_SYMBOL_STR(generic_write_checks) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x33aca466, __VMLINUX_SYMBOL_STR(filemap_fdatawait) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xc7ec6c27, __VMLINUX_SYMBOL_STR(strspn) },
	{ 0xc15dc5de, __VMLINUX_SYMBOL_STR(filemap_write_and_wait_range) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x7422b440, __VMLINUX_SYMBOL_STR(__generic_file_write_iter) },
	{ 0xb9bc5f41, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0xc1d8cfaf, __VMLINUX_SYMBOL_STR(__fdget) },
	{ 0x6ff10916, __VMLINUX_SYMBOL_STR(prepare_kernel_cred) },
	{ 0x46aacb3f, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0xbe7bf743, __VMLINUX_SYMBOL_STR(kill_anon_super) },
	{ 0x64789398, __VMLINUX_SYMBOL_STR(seq_escape) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x59db5575, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x389207a0, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x396b9d2c, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0xe77a264e, __VMLINUX_SYMBOL_STR(truncate_inode_pages_range) },
	{ 0xee4946ea, __VMLINUX_SYMBOL_STR(generic_file_open) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xc8ed5ccd, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0x9d76b5e0, __VMLINUX_SYMBOL_STR(vfs_kern_mount) },
	{ 0xe7ebe9c7, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0x235aef49, __VMLINUX_SYMBOL_STR(filemap_write_and_wait) },
	{ 0xcae232b, __VMLINUX_SYMBOL_STR(utf16s_to_utf8s) },
	{ 0x55ca557, __VMLINUX_SYMBOL_STR(deactivate_locked_super) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xcdc49e19, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xe8ebaac1, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xaaa13a94, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x6753866d, __VMLINUX_SYMBOL_STR(__fscache_write_page) },
	{ 0x1c23b60f, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xa58fea9d, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x33a1c14, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xefde5da1, __VMLINUX_SYMBOL_STR(invalidate_inode_pages2) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xbfd03632, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x6dc39bc, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe10471e7, __VMLINUX_SYMBOL_STR(__fscache_register_netfs) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x8a0f4230, __VMLINUX_SYMBOL_STR(rename_lock) },
	{ 0xecdf0928, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0x63c6c2f1, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x28118cb6, __VMLINUX_SYMBOL_STR(__get_user_1) },
	{ 0x6c1ce5ce, __VMLINUX_SYMBOL_STR(strcspn) },
	{ 0x82d2e8dd, __VMLINUX_SYMBOL_STR(redirty_page_for_writepage) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7ad77260, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0xb0a2218, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x75804391, __VMLINUX_SYMBOL_STR(override_creds) },
	{ 0x442a091f, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x711a6866, __VMLINUX_SYMBOL_STR(__fscache_uncache_page) },
	{ 0x4e833a1e, __VMLINUX_SYMBOL_STR(copy_page_from_iter) },
	{ 0xc2a4f192, __VMLINUX_SYMBOL_STR(set_page_dirty) },
	{ 0x4ac6f695, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xa3131f6, __VMLINUX_SYMBOL_STR(strnchr) },
	{ 0x3a8ca204, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x44fb1547, __VMLINUX_SYMBOL_STR(lru_cache_add_file) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xf2415352, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xd3bc530e, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit_lock) },
	{ 0xe25772a9, __VMLINUX_SYMBOL_STR(end_page_writeback) },
	{ 0x29b120b6, __VMLINUX_SYMBOL_STR(from_kgid_munged) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0xe0e2656d, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x183fa88b, __VMLINUX_SYMBOL_STR(mempool_alloc_slab) },
	{ 0x7a2add7d, __VMLINUX_SYMBOL_STR(current_kernel_time64) },
	{ 0x39853263, __VMLINUX_SYMBOL_STR(key_revoke) },
	{ 0xb1b4b3c6, __VMLINUX_SYMBOL_STR(kmap_atomic) },
	{ 0x97bbd1ca, __VMLINUX_SYMBOL_STR(kernel_setsockopt) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x98e68eca, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x381ce59f, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0x5b584c4b, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0xc93db5ce, __VMLINUX_SYMBOL_STR(__fscache_read_or_alloc_page) },
	{ 0xf74bfc03, __VMLINUX_SYMBOL_STR(__fscache_uncache_all_inode_pages) },
	{ 0x752d5f5b, __VMLINUX_SYMBOL_STR(kstrtobool) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x4fa3f7a4, __VMLINUX_SYMBOL_STR(finish_no_open) },
	{ 0x568f1fc5, __VMLINUX_SYMBOL_STR(wait_for_completion_killable) },
	{ 0xa54f7d15, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0xd627480b, __VMLINUX_SYMBOL_STR(strncat) },
	{ 0x2022557d, __VMLINUX_SYMBOL_STR(current_fs_time) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x25205f59, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x357bfb74, __VMLINUX_SYMBOL_STR(copy_page_to_iter) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x2fee16d2, __VMLINUX_SYMBOL_STR(crypto_shash_update) },
	{ 0xeeb68bab, __VMLINUX_SYMBOL_STR(generic_writepages) },
	{ 0xf26b3c18, __VMLINUX_SYMBOL_STR(sget) },
	{ 0x1a1c4082, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0x91f5e473, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0x64db9a5, __VMLINUX_SYMBOL_STR(mark_mounts_for_expiry) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x47829c81, __VMLINUX_SYMBOL_STR(__fscache_maybe_release_page) },
	{ 0x2a0e0ccd, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0x980d7548, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x7621ab43, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7016b923, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xed93f29e, __VMLINUX_SYMBOL_STR(__kunmap_atomic) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x7ff35e2b, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x27298b6e, __VMLINUX_SYMBOL_STR(setattr_copy) },
	{ 0xa681fe88, __VMLINUX_SYMBOL_STR(generate_random_uuid) },
	{ 0xdbb0636, __VMLINUX_SYMBOL_STR(unlock_two_nondirectories) },
	{ 0x4b3f90be, __VMLINUX_SYMBOL_STR(init_uts_ns) },
	{ 0xc350b8f9, __VMLINUX_SYMBOL_STR(user_describe) },
	{ 0x3fa04b28, __VMLINUX_SYMBOL_STR(truncate_pagecache) },
	{ 0xdd27fa87, __VMLINUX_SYMBOL_STR(memchr) },
	{ 0x8a99a016, __VMLINUX_SYMBOL_STR(mempool_free_slab) },
	{ 0x5315c006, __VMLINUX_SYMBOL_STR(wait_on_page_bit) },
	{ 0x886bc76f, __VMLINUX_SYMBOL_STR(mempool_resize) },
	{ 0x340fd112, __VMLINUX_SYMBOL_STR(key_type_logon) },
	{ 0x1e627be0, __VMLINUX_SYMBOL_STR(crypto_shash_setkey) },
	{ 0xb5b1edbf, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x2917f3dc, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0x36ad0865, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x8f538c1b, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x2e064e03, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xccb2439f, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x8458f70b, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xb8d69516, __VMLINUX_SYMBOL_STR(key_put) },
	{ 0x51ef33b8, __VMLINUX_SYMBOL_STR(kstrndup) },
	{ 0x4f6041ef, __VMLINUX_SYMBOL_STR(dns_query) },
	{ 0x1ff86457, __VMLINUX_SYMBOL_STR(__fscache_unregister_netfs) },
	{ 0x61651be, __VMLINUX_SYMBOL_STR(strcat) },
	{ 0xb2682405, __VMLINUX_SYMBOL_STR(utf8_to_utf32) },
	{ 0x40cb86b5, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x691274c3, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x486d4250, __VMLINUX_SYMBOL_STR(mnt_drop_write_file) },
	{ 0x16e297c3, __VMLINUX_SYMBOL_STR(bit_wait) },
	{ 0x3621cbb8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x3026722, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xdb60398b, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0xfe855a55, __VMLINUX_SYMBOL_STR(simple_dir_operations) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x2efd09c6, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0x780a5baa, __VMLINUX_SYMBOL_STR(d_alloc) },
	{ 0xbde50e6e, __VMLINUX_SYMBOL_STR(generic_setlease) },
	{ 0x59f17249, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0x3ccc897f, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xa28dc208, __VMLINUX_SYMBOL_STR(find_get_pages_tag) },
	{ 0x52bf14fb, __VMLINUX_SYMBOL_STR(load_nls) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0xaccabc6a, __VMLINUX_SYMBOL_STR(in4_pton) },
	{ 0x2b4e956e, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0xd6cb915e, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x55473219, __VMLINUX_SYMBOL_STR(mnt_want_write_file) },
	{ 0x6e99bb56, __VMLINUX_SYMBOL_STR(deactivate_super) },
	{ 0x8b8059bd, __VMLINUX_SYMBOL_STR(in_group_p) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xc2b057a0, __VMLINUX_SYMBOL_STR(bdi_setup_and_register) },
	{ 0x150cb2b9, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0xa70f56b0, __VMLINUX_SYMBOL_STR(lock_two_nondirectories) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x5e95b1cd, __VMLINUX_SYMBOL_STR(current_umask) },
	{ 0x82f62bf8, __VMLINUX_SYMBOL_STR(locks_lock_inode_wait) },
	{ 0x55d6c0ad, __VMLINUX_SYMBOL_STR(force_sig) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xd2d5ed59, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x95add812, __VMLINUX_SYMBOL_STR(__module_put_and_exit) },
	{ 0xfb0a0a24, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x3b464854, __VMLINUX_SYMBOL_STR(__put_cred) },
	{ 0x282ef0ef, __VMLINUX_SYMBOL_STR(keyring_alloc) },
	{ 0xcc31c9de, __VMLINUX_SYMBOL_STR(clear_page_dirty_for_io) },
	{ 0x2d4a8e7, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0xec1aa6ef, __VMLINUX_SYMBOL_STR(memzero_explicit) },
	{ 0xbc26332d, __VMLINUX_SYMBOL_STR(register_key_type) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2232a8a5, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x87ac11d6, __VMLINUX_SYMBOL_STR(kstrtobool_from_user) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x2a5a9212, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x3faa02d4, __VMLINUX_SYMBOL_STR(kernel_recvmsg) },
	{ 0xf894eedb, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x5e8c3a42, __VMLINUX_SYMBOL_STR(__fscache_relinquish_cookie) },
	{ 0x3454a49f, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x8d91a4b7, __VMLINUX_SYMBOL_STR(generic_file_write_iter) },
	{ 0xe5d32a5b, __VMLINUX_SYMBOL_STR(__pagevec_release) },
	{ 0x113de498, __VMLINUX_SYMBOL_STR(add_to_page_cache_locked) },
	{ 0x7d820373, __VMLINUX_SYMBOL_STR(d_hash_and_lookup) },
	{ 0xe8a73aaf, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xe7c5c1d1, __VMLINUX_SYMBOL_STR(__test_set_page_writeback) },
	{ 0xf02d1a74, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x4104223f, __VMLINUX_SYMBOL_STR(posix_unblock_lock) },
	{ 0x4868e84f, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0xfb0a560, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x32ec6770, __VMLINUX_SYMBOL_STR(finish_open) },
	{ 0xeef4095d, __VMLINUX_SYMBOL_STR(posix_lock_file) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x64ed838a, __VMLINUX_SYMBOL_STR(__fscache_readpages_cancel) },
	{ 0xf2163377, __VMLINUX_SYMBOL_STR(iunique) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x375dd493, __VMLINUX_SYMBOL_STR(generic_permission) },
	{ 0xc4300897, __VMLINUX_SYMBOL_STR(pagevec_lookup) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x7b8012d0, __VMLINUX_SYMBOL_STR(load_nls_default) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0x352759cc, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x456ac2dc, __VMLINUX_SYMBOL_STR(unregister_key_type) },
	{ 0x6e06bec9, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0xe57878a1, __VMLINUX_SYMBOL_STR(in6_pton) },
	{ 0x9604505a, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x26e2714c, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xc764bf4e, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x72926c98, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x40c01c2f, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0xaa53103d, __VMLINUX_SYMBOL_STR(bdi_destroy) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0x3d454406, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xa45841f1, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xc66e75bb, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x163750ca, __VMLINUX_SYMBOL_STR(filemap_map_pages) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xc4034d31, __VMLINUX_SYMBOL_STR(kfree_put_link) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x55aa57eb, __VMLINUX_SYMBOL_STR(__break_lease) },
	{ 0xd942e14f, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0x88b18415, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0x48bbd050, __VMLINUX_SYMBOL_STR(mnt_set_expiry) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xdd1dc93a, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x26c3688a, __VMLINUX_SYMBOL_STR(grab_cache_page_write_begin) },
	{ 0x9fec14ae, __VMLINUX_SYMBOL_STR(__fscache_read_or_alloc_pages) },
	{ 0x72aedf9c, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x127097f7, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xfa36014, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x753e09ce, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x47fd624e, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0xab95d144, __VMLINUX_SYMBOL_STR(revert_creds) },
	{ 0x652bc83f, __VMLINUX_SYMBOL_STR(__sock_create) },
	{ 0x4aef124, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0xf9aa2bc4, __VMLINUX_SYMBOL_STR(vfs_fsync_range) },
	{ 0x947e059, __VMLINUX_SYMBOL_STR(generic_fillattr) },
	{ 0xc90d0d15, __VMLINUX_SYMBOL_STR(filemap_fdatawrite) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x1d48cad2, __VMLINUX_SYMBOL_STR(posix_test_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fscache";


MODULE_INFO(srcversion, "17BA83BF526DA027157A4C9");
