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

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x7dcd94aa, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x64940ef, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0xb5dcab5b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x292c035c, __VMLINUX_SYMBOL_STR(tty_hung_up_p) },
	{ 0xf22449ae, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x39837c9c, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x6c7ea721, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x37e2d6d3, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xff7559e4, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x1f01f7bb, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xe19d90bf, __VMLINUX_SYMBOL_STR(do_SAK) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x246c73d9, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0x68aca4ad, __VMLINUX_SYMBOL_STR(down) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x5e6768ef, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_flags) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x2b90c7f0, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x2e7a78d5, __VMLINUX_SYMBOL_STR(tty_wait_until_sent) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xe8c9f1c1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x53ef4073, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xe072d980, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0x8c97157c, __VMLINUX_SYMBOL_STR(tty_hangup) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x1627320d, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0x5860aad4, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xd3719d59, __VMLINUX_SYMBOL_STR(paravirt_ticketlocks_enabled) },
	{ 0x71e3cecb, __VMLINUX_SYMBOL_STR(up) },
	{ 0x936c447, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0x10b5c317, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x5136e974, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x7bede46b, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001C00d00002273sv00001C00sd00002273bc*sc*i*");
MODULE_ALIAS("pci:v00004348d00003253sv00004348sd00003253bc*sc*i*");
MODULE_ALIAS("pci:v00004348d00005053sv00004348sd00005053bc*sc*i*");
MODULE_ALIAS("pci:v00004348d00003453sv00004348sd00003453bc*sc*i*");
MODULE_ALIAS("pci:v00004348d00007053sv00004348sd00003253bc*sc*i*");
MODULE_ALIAS("pci:v00004348d00005046sv00004348sd00005046bc*sc*i*");
MODULE_ALIAS("pci:v00004348d00007173sv00004348sd00003473bc*sc*i*");
MODULE_ALIAS("pci:v00004348d00007073sv00004348sd00003473bc*sc*i*");
MODULE_ALIAS("pci:v00004348d00003873sv00004348sd00003873bc*sc*i*");
MODULE_ALIAS("pci:v00004348d00003853sv00004348sd00003853bc*sc*i*");
MODULE_ALIAS("pci:v00004348d00005334sv00004348sd00005053bc*sc*i*");
MODULE_ALIAS("pci:v00004348d00005334sv00004348sd00005334bc*sc*i*");
MODULE_ALIAS("pci:v00004348d00005338sv00004348sd00005338bc*sc*i*");
MODULE_ALIAS("pci:v00004348d00005838sv00004348sd00005838bc*sc*i*");
MODULE_ALIAS("pci:v00001C00d00003253sv00001C00sd00003253bc*sc*i*");
MODULE_ALIAS("pci:v00001C00d00003250sv00001C00sd00003250bc*sc*i*");
MODULE_ALIAS("pci:v00001C00d00003470sv00001C00sd00003470bc*sc*i*");
MODULE_ALIAS("pci:v00001C00d00003450sv00001C00sd00003450bc*sc*i*");
MODULE_ALIAS("pci:v00001C00d00003853sv00001C00sd00003853bc*sc*i*");
MODULE_ALIAS("pci:v00001C00d00004353sv00001C00sd00004353bc*sc*i*");
MODULE_ALIAS("pci:v00004348d00005049sv00004348sd00005049bc*sc*i*");

MODULE_INFO(srcversion, "6028663C4828364F388A9B5");
