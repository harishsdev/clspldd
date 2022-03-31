#include<linux/module.h>
#include<linux/init.h>
#include<linux/kernel.h>
static int __init init_func(void)
{
    printk(KERN_INFO"init_func\n");
    return 0;
}
static void __exit exit_func(void)
{
    printk(KERN_INFO"exit_func\n");
}
module_init(init_func);
module_exit(exit_func);
MODULE_LICENSE("GPL");

