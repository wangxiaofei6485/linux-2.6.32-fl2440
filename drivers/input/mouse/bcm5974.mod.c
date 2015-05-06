#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v05ACp0223d*dc*dsc*dp*ic03isc*ip02*");
MODULE_ALIAS("usb:v05ACp0224d*dc*dsc*dp*ic03isc*ip02*");
MODULE_ALIAS("usb:v05ACp0225d*dc*dsc*dp*ic03isc*ip02*");
MODULE_ALIAS("usb:v05ACp0230d*dc*dsc*dp*ic03isc*ip02*");
MODULE_ALIAS("usb:v05ACp0231d*dc*dsc*dp*ic03isc*ip02*");
MODULE_ALIAS("usb:v05ACp0232d*dc*dsc*dp*ic03isc*ip02*");
MODULE_ALIAS("usb:v05ACp0236d*dc*dsc*dp*ic03isc*ip02*");
MODULE_ALIAS("usb:v05ACp0237d*dc*dsc*dp*ic03isc*ip02*");
MODULE_ALIAS("usb:v05ACp0238d*dc*dsc*dp*ic03isc*ip02*");
