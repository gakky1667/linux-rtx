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
	{ 0x634251a8, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x53966ac5, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x6711f38d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x32200b56, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd220cf8a, __VMLINUX_SYMBOL_STR(jiffies_to_timespec) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0xf059ad48, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0xbce457a4, __VMLINUX_SYMBOL_STR(sched_setattr) },
	{ 0xc28b346c, __VMLINUX_SYMBOL_STR(irq_to_desc) },
	{ 0x913707e7, __VMLINUX_SYMBOL_STR(pid_vnr) },
	{ 0xf719f7bf, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x94313d7, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0xb54533f7, __VMLINUX_SYMBOL_STR(usecs_to_jiffies) },
	{ 0x91831d70, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x63dba7b, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x91b4f005, __VMLINUX_SYMBOL_STR(pci_get_class) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x83ed83ff, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x6071ffa1, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x88895659, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x4f437f14, __VMLINUX_SYMBOL_STR(kthread_bind) },
	{ 0x186571f4, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xd4d7370c, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x649e9fe2, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xec6d12b9, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xab2e743e, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x986b099f, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xd91773e2, __VMLINUX_SYMBOL_STR(set_cpus_allowed_ptr) },
	{ 0x3eba758b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x68aca4ad, __VMLINUX_SYMBOL_STR(down) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x2c24765c, __VMLINUX_SYMBOL_STR(hrtimer_init_sleeper) },
	{ 0x180d5c81, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x43261dca, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x3a26ed11, __VMLINUX_SYMBOL_STR(sched_clock) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0x1c96f68f, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x90b0859f, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x3928efe9, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa66f90f9, __VMLINUX_SYMBOL_STR(sched_setscheduler) },
	{ 0x3109b751, __VMLINUX_SYMBOL_STR(cpu_clock) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0xc3889f8b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xd77a5aa5, __VMLINUX_SYMBOL_STR(__bitmap_and) },
	{ 0x3013c50, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x25a97010, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0xd3719d59, __VMLINUX_SYMBOL_STR(paravirt_ticketlocks_enabled) },
	{ 0x71e3cecb, __VMLINUX_SYMBOL_STR(up) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B1D8779A48411F5401145F7");
