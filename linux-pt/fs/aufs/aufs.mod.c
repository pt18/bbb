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
	{ 0x950e9921, __VMLINUX_SYMBOL_STR(get_acl) },
	{ 0x6c21551d, __VMLINUX_SYMBOL_STR(vfs_create) },
	{ 0x68abb700, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x9752f8e2, __VMLINUX_SYMBOL_STR(kset_create_and_add) },
	{ 0xc75a0417, __VMLINUX_SYMBOL_STR(d_path) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xbb53c6ea, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x28fa17bf, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x6ebd14ab, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x72b46a8c, __VMLINUX_SYMBOL_STR(kobject_get) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xcf3ca1e1, __VMLINUX_SYMBOL_STR(security_path_chmod) },
	{ 0xbc95fcd6, __VMLINUX_SYMBOL_STR(fsstack_copy_inode_size) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0x5a04785, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x80e1c527, __VMLINUX_SYMBOL_STR(security_path_rename) },
	{ 0x6a112424, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xd74289f9, __VMLINUX_SYMBOL_STR(__percpu_counter_add) },
	{ 0x5c55794b, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x486f645d, __VMLINUX_SYMBOL_STR(mntget) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x6256f286, __VMLINUX_SYMBOL_STR(inode_permission) },
	{ 0xcfefe1e, __VMLINUX_SYMBOL_STR(percpu_counter_destroy) },
	{ 0x6579f854, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x134bb9b3, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x38d339f6, __VMLINUX_SYMBOL_STR(security_file_permission) },
	{ 0xbe7bf743, __VMLINUX_SYMBOL_STR(kill_anon_super) },
	{ 0xe33c7475, __VMLINUX_SYMBOL_STR(dget_parent) },
	{ 0x957f098d, __VMLINUX_SYMBOL_STR(vfs_link) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x6116c3e3, __VMLINUX_SYMBOL_STR(vfs_writef) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xf1deabf2, __VMLINUX_SYMBOL_STR(div64_u64) },
	{ 0x389207a0, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x17ecfbdd, __VMLINUX_SYMBOL_STR(put_filp) },
	{ 0x4f84cbf9, __VMLINUX_SYMBOL_STR(is_bad_inode) },
	{ 0xd368a4d, __VMLINUX_SYMBOL_STR(downgrade_write) },
	{ 0xb8c26be7, __VMLINUX_SYMBOL_STR(vfs_llseek) },
	{ 0xa35ac36, __VMLINUX_SYMBOL_STR(security_path_symlink) },
	{ 0xef7f8fe9, __VMLINUX_SYMBOL_STR(setfl) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xc4746e8c, __VMLINUX_SYMBOL_STR(touch_atime) },
	{ 0x6a7ea26f, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0xcdc49e19, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xd9e45fab, __VMLINUX_SYMBOL_STR(get_task_comm) },
	{ 0xe8ebaac1, __VMLINUX_SYMBOL_STR(dput) },
	{ 0xaaa13a94, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xc7eafcfd, __VMLINUX_SYMBOL_STR(d_walk) },
	{ 0x1c23b60f, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x33a1c14, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0x99a04b82, __VMLINUX_SYMBOL_STR(vfs_readf) },
	{ 0x50fc4b33, __VMLINUX_SYMBOL_STR(d_find_alias) },
	{ 0xce079954, __VMLINUX_SYMBOL_STR(dentry_open) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xbfd03632, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x13a74aa3, __VMLINUX_SYMBOL_STR(do_truncate) },
	{ 0x60142cce, __VMLINUX_SYMBOL_STR(vfs_mknod) },
	{ 0x1eeb848e, __VMLINUX_SYMBOL_STR(__percpu_counter_sum) },
	{ 0xa843805a, __VMLINUX_SYMBOL_STR(get_unused_fd_flags) },
	{ 0x6dc39bc, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x26bf29a4, __VMLINUX_SYMBOL_STR(do_splice_from) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xf5d58d2, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x898e465d, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0x8a0f4230, __VMLINUX_SYMBOL_STR(rename_lock) },
	{ 0x63c6c2f1, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x3672ca8c, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xe4957136, __VMLINUX_SYMBOL_STR(vfs_symlink) },
	{ 0x39ed2c46, __VMLINUX_SYMBOL_STR(mount_nodev) },
	{ 0xd41ef057, __VMLINUX_SYMBOL_STR(path_get) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x5144108d, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xf8a82b5e, __VMLINUX_SYMBOL_STR(__sync_filesystem) },
	{ 0x3995c8b7, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xf271b26b, __VMLINUX_SYMBOL_STR(mnt_drop_write) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe6460db0, __VMLINUX_SYMBOL_STR(security_path_unlink) },
	{ 0x3a8ca204, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xf2415352, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x76e80dc, __VMLINUX_SYMBOL_STR(vfs_rmdir) },
	{ 0x7bc3445f, __VMLINUX_SYMBOL_STR(unlock_rename) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x55339365, __VMLINUX_SYMBOL_STR(flush_delayed_fput) },
	{ 0x76ac3c06, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xd01eeba4, __VMLINUX_SYMBOL_STR(vfs_read) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xa816c470, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x381ce59f, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0x5b584c4b, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0xfaeb9f8, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x3de11b98, __VMLINUX_SYMBOL_STR(security_path_mkdir) },
	{ 0x4fa3f7a4, __VMLINUX_SYMBOL_STR(finish_no_open) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xf1df2344, __VMLINUX_SYMBOL_STR(sync_inode) },
	{ 0x7ac5b069, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2d81b5f7, __VMLINUX_SYMBOL_STR(posix_acl_chmod) },
	{ 0x1403bc31, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x3667553c, __VMLINUX_SYMBOL_STR(path_noexec) },
	{ 0x4b40e4f5, __VMLINUX_SYMBOL_STR(__audit_inode_child) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x11a13e31, __VMLINUX_SYMBOL_STR(_kstrtol) },
	{ 0xa13f2b11, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0xf6100bd1, __VMLINUX_SYMBOL_STR(vfs_getxattr) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x2a0e0ccd, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0x980d7548, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x5f44e0b8, __VMLINUX_SYMBOL_STR(d_move) },
	{ 0xbe813abe, __VMLINUX_SYMBOL_STR(iterate_mounts) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x176944ed, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x7621ab43, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xfb97f0e9, __VMLINUX_SYMBOL_STR(lock_rename) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7016b923, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xaf835ade, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x622c9ef7, __VMLINUX_SYMBOL_STR(__mnt_drop_write) },
	{ 0x5240ee7, __VMLINUX_SYMBOL_STR(percpu_counter_batch) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0xb5b1edbf, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x4c933863, __VMLINUX_SYMBOL_STR(exportfs_encode_fh) },
	{ 0x36ad0865, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x8f538c1b, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x2e064e03, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x9b6eb137, __VMLINUX_SYMBOL_STR(ksize) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x60d15bbe, __VMLINUX_SYMBOL_STR(__task_pid_nr_ns) },
	{ 0x53c013d, __VMLINUX_SYMBOL_STR(__fsnotify_parent) },
	{ 0x40cb86b5, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x113c9706, __VMLINUX_SYMBOL_STR(mntput) },
	{ 0x691274c3, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x8d6132ef, __VMLINUX_SYMBOL_STR(security_path_truncate) },
	{ 0x3621cbb8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xfd11919a, __VMLINUX_SYMBOL_STR(ilookup) },
	{ 0x1497424, __VMLINUX_SYMBOL_STR(__devcgroup_inode_permission) },
	{ 0x6f119f7b, __VMLINUX_SYMBOL_STR(mnt_want_write) },
	{ 0xcaaa9d4, __VMLINUX_SYMBOL_STR(fs_kobj) },
	{ 0x780a5baa, __VMLINUX_SYMBOL_STR(d_alloc) },
	{ 0xa66e44d2, __VMLINUX_SYMBOL_STR(sysfs_remove_file_ns) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x78362249, __VMLINUX_SYMBOL_STR(__fput_sync) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x4f55176c, __VMLINUX_SYMBOL_STR(vfs_fallocate) },
	{ 0xd6cb915e, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x1eebcd3f, __VMLINUX_SYMBOL_STR(exportfs_decode_fh) },
	{ 0x3a983442, __VMLINUX_SYMBOL_STR(empty_zero_page) },
	{ 0x150cb2b9, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xc4bd282e, __VMLINUX_SYMBOL_STR(path_is_under) },
	{ 0x77834a8c, __VMLINUX_SYMBOL_STR(security_inode_permission) },
	{ 0x17ab16de, __VMLINUX_SYMBOL_STR(vfs_statfs) },
	{ 0x2f50b7e, __VMLINUX_SYMBOL_STR(do_splice_to) },
	{ 0xff4e4011, __VMLINUX_SYMBOL_STR(vfs_mkdir) },
	{ 0x3f4547a7, __VMLINUX_SYMBOL_STR(put_unused_fd) },
	{ 0xef2fdc4f, __VMLINUX_SYMBOL_STR(__percpu_counter_init) },
	{ 0x1b4de4b4, __VMLINUX_SYMBOL_STR(down_read_trylock) },
	{ 0x2330651b, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0xeb3189fa, __VMLINUX_SYMBOL_STR(vfs_truncate) },
	{ 0x6ba3cb43, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd3809d, __VMLINUX_SYMBOL_STR(security_path_mknod) },
	{ 0x98498fdf, __VMLINUX_SYMBOL_STR(vfs_unlink) },
	{ 0x7f0fc017, __VMLINUX_SYMBOL_STR(vfs_getxattr_alloc) },
	{ 0x2a5a9212, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xd3f0f386, __VMLINUX_SYMBOL_STR(d_tmpfile) },
	{ 0xf894eedb, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xeedfcec3, __VMLINUX_SYMBOL_STR(task_work_run) },
	{ 0x3454a49f, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xf02d1a74, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x31683780, __VMLINUX_SYMBOL_STR(kset_unregister) },
	{ 0xfb0a560, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x32ec6770, __VMLINUX_SYMBOL_STR(finish_open) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf2163377, __VMLINUX_SYMBOL_STR(iunique) },
	{ 0x375dd493, __VMLINUX_SYMBOL_STR(generic_permission) },
	{ 0xac2228b3, __VMLINUX_SYMBOL_STR(d_find_any_alias) },
	{ 0x5a63dbac, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4f5cd160, __VMLINUX_SYMBOL_STR(__sb_end_write) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xd6703119, __VMLINUX_SYMBOL_STR(fd_install) },
	{ 0x352759cc, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x70c81d21, __VMLINUX_SYMBOL_STR(fsnotify) },
	{ 0x12d1179d, __VMLINUX_SYMBOL_STR(update_time) },
	{ 0x441deb9c, __VMLINUX_SYMBOL_STR(__sb_start_write) },
	{ 0x9604505a, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0xa09530f7, __VMLINUX_SYMBOL_STR(open_check_o_direct) },
	{ 0xc764bf4e, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x40c01c2f, __VMLINUX_SYMBOL_STR(__init_swait_queue_head) },
	{ 0x8b602c2e, __VMLINUX_SYMBOL_STR(iterate_dir) },
	{ 0x3d454406, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xa45841f1, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x8f678b07, __VMLINUX_SYMBOL_STR(__stack_chk_guard) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xc66e75bb, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x55aa57eb, __VMLINUX_SYMBOL_STR(__break_lease) },
	{ 0x88b18415, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x4ad453b4, __VMLINUX_SYMBOL_STR(vfs_rename) },
	{ 0x7bae4486, __VMLINUX_SYMBOL_STR(sysfs_create_file_ns) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x7830fb61, __VMLINUX_SYMBOL_STR(vfs_getattr) },
	{ 0x45853451, __VMLINUX_SYMBOL_STR(get_empty_filp) },
	{ 0xb236b43f, __VMLINUX_SYMBOL_STR(notify_change) },
	{ 0x2aa0a1a1, __VMLINUX_SYMBOL_STR(vfs_setxattr) },
	{ 0xc52f2377, __VMLINUX_SYMBOL_STR(security_path_link) },
	{ 0xfa36014, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x753e09ce, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x5f2ba101, __VMLINUX_SYMBOL_STR(security_path_chown) },
	{ 0x4b32bc61, __VMLINUX_SYMBOL_STR(vfs_listxattr) },
	{ 0x4aef124, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0xf77b1b88, __VMLINUX_SYMBOL_STR(vfs_removexattr) },
	{ 0x6dd73a98, __VMLINUX_SYMBOL_STR(iget_locked) },
	{ 0xa17e4ccc, __VMLINUX_SYMBOL_STR(vfs_write) },
	{ 0xb859f38b, __VMLINUX_SYMBOL_STR(krealloc) },
	{ 0x947e059, __VMLINUX_SYMBOL_STR(generic_fillattr) },
	{ 0x380160fc, __VMLINUX_SYMBOL_STR(seq_path) },
	{ 0x6a92c8dd, __VMLINUX_SYMBOL_STR(security_path_rmdir) },
	{ 0xadf0d969, __VMLINUX_SYMBOL_STR(locks_mandatory_area) },
	{ 0x3b0a0b53, __VMLINUX_SYMBOL_STR(filp_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "29F92BD1C018F29EFB6BE62");
