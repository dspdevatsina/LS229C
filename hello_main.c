
//#include <linux/init.h>
//#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/platform_device.h>




#define DRV_NAME	"hello"


static int __devinit hello_probe(struct platform_device *pdev)
{
		printk(KERN_ALERT "Hello World probe-----------------------------\n");
    return 0;
}

static int __devexit hello_remove(struct platform_device *pdev)
{
		printk(KERN_ALERT "Hello World remove******************************\n");
    return 0;
}



static struct platform_driver hello_driver =
{
    .driver = {
        .name = DRV_NAME,
    },
    .probe = hello_probe,
    .remove =hello_remove,


};

static struct platform_device hello_device = {
    .name       = DRV_NAME,
};


static int __init hello_init(void)
{
    int ret;
//		ret = platform_device_register(&hello_device);
		printk(KERN_ALERT "Hello World  +++++++++++++++++++++++++++++++++\n");
//    return platform_driver_register(&hello_driver);
}

static void __exit hello_exit(void)
{
	  printk(KERN_ALERT "Hello World EXIT =============================\n");
//    platform_driver_unregister(&hello_driver);
//    platform_device_unregister(&hello_device);
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:hello");
