
/*
 *  hello.c - The simplest kernel module.
 */
#include <linux/module.h>	/* Needed by all modules */
#include <linux/kernel.h>	/* Needed for KERN_INFO */
#include <linux/init.h>		/* Needed for the macros */
#define DRIVER_AUTHOR "John Smith"
#define DRIVER_DESC   "A sample driver"

int my_init_module(void)
{
	printk(KERN_INFO "Hello world\n");
	return 0;
}

void my_cleanup_module(void)
{
	printk(KERN_INFO "Goodbye world\n");
}

module_init(my_init_module);
module_exit(my_cleanup_module);
MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
