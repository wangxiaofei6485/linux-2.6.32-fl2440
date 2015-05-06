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
"depends=snd-rawmidi";

MODULE_ALIAS("usb:v17CCp1969d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v17CCp1940d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v17CCp4711d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v17CCp4712d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v17CCp0815d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v17CCp1978d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v17CCp1915d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v17CCp0D8Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v17CCp0839d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v17CCp041Cd*dc*dsc*dp*ic*isc*ip*");
