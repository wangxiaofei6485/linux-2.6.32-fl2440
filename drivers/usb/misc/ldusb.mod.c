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

MODULE_ALIAS("usb:v0F11p1000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0F11p1010d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0F11p1020d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0F11p1080d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0F11p1081d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0F11p1090d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0F11p1100d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0F11p1101d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0F11p1200d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0F11p2000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0F11p2010d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0F11p2020d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0F11p2030d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0F11p2040d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v08F7p0002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v08F7p0003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v08F7p0004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v08F7p0006d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "90102A94AEEEE50A11D972B");
