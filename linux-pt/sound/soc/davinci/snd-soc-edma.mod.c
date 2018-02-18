#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xbba89470, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xe02be10d, __VMLINUX_SYMBOL_STR(edma_filter_fn) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xac787345, __VMLINUX_SYMBOL_STR(devm_snd_dmaengine_pcm_register) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x60feb2f8, __VMLINUX_SYMBOL_STR(snd_dmaengine_pcm_prepare_slave_config) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

