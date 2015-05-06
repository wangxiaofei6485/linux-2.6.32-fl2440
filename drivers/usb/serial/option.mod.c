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

MODULE_ALIAS("usb:v0AF0p5000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AF0p6000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AF0p6100d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AF0p6200d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AF0p6300d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AF0p6050d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AF0p6150d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AF0p6250d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AF0p6350d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AF0p6500d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AF0p6501d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AF0p6600d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AF0p6601d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AF0p6701d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AF0p6721d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AF0p6741d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AF0p6761d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AF0p6800d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AF0p6901d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AF0p7001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AF0p7021d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AF0p7041d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AF0p7061d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AF0p7100d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0AF0p7201d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0408pEA02d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0408pEA03d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0408pEA04d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0408pEA05d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0408pEA06d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v12D1p1001d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1003d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1004d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1401d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1402d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1403d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1404d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1405d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1406d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1407d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1408d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1409d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p140Ad*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p140Bd*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p140Cd*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p140Dd*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p140Ed*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p140Fd*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1410d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1411d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1412d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1413d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1414d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1415d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1416d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1417d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1418d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1419d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p141Ad*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p141Bd*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p141Cd*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p141Dd*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p141Ed*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p141Fd*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1420d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1421d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1422d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1423d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1424d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1425d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1426d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1427d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1428d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1429d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p142Ad*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p142Bd*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p142Cd*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p142Dd*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p142Ed*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p142Fd*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1430d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1431d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1432d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1433d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1434d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1435d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1436d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1437d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1438d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p1439d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p143Ad*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p143Bd*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p143Cd*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p143Dd*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p143Ed*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p143Fd*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v12D1p14ACd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1614p0800d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p1100d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p1110d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p1120d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p1130d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p1400d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p1410d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p1420d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p1430d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p1450d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p2100d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p2110d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p2120d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p2130d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p2400d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p2410d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p2420d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p4400d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p4100d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p5100d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p5010d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p6000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p6002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p7000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p8000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p9000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p6001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p7001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p8001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410p9001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1410pA001d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1614p0800d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1614p7002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1614p0802d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v413Cp8114d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v413Cp8115d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v413Cp8116d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v413Cp8117d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v413Cp8118d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v413Cp8128d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v413Cp8129d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v413Cp8133d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v413Cp8134d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v413Cp8135d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v413Cp8136d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v413Cp8137d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v413Cp8138d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v413Cp8180d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v413Cp8181d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v413Cp8182d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v16D5p6501d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v16D5p6502d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v16D5p6202d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1726p1000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0EABpC893d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1A8Dp1002d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1A8Dp1003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1A8Dp1004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1A8Dp1005d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1A8Dp1006d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1A8Dp1007d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1A8Dp1008d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1A8Dp1009d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1A8Dp100Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1A8Dp100Bd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1A8Dp100Cd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1A8Dp100Dd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1A8Dp100Ed*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1A8Dp100Fd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1A8Dp1010d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1A8Dp1011d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1A8Dp1012d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C88p17DAd*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0C88p180Ad*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05C6p6000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v05C6p6613d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v16D8p6280d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1BC7p1003d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1BC7p1004d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v19D2p0001d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0002d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0003d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0004d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0005d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0006d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0007d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0008d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0009d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p000Ad*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p000Bd*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p000Cd*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p000Dd*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p000Ed*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p000Fd*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0010d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0011d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0012d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0013d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0015d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0016d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0017d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0018d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0019d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0020d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0021d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0022d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0023d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0024d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0025d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0026d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0028d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0029d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0030d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0031d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0032d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0033d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0037d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0039d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0042d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0043d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0048d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0049d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0051d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0052d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0054d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0055d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0057d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0058d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0061d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0062d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0063d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0064d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0066d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0069d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0076d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0078d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0082d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0086d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p2002d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p2003d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0104d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0106d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0108d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0113d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0117d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0118d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0121d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0122d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0123d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0124d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0125d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0126d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0128d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0142d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0143d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0144d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0145d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0146d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0147d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0148d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0149d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0150d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0151d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0152d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0153d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0154d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0155d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0156d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0157d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0158d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0159d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0160d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0161d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0162d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0014d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0027d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0059d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0060d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0070d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0073d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0130d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2p0141d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2pFFFEd*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2pFFF1d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v19D2pFFF5d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v04A5p4068d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1186p3E04d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1E0EpCE16d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1DA5p4512d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1DA5p4523d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1DA5p4515d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1DA5p4519d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0930p0D45d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v0930p1302d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1E0Ep9000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1E0EpCE16d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1E0Ep9200d*dc*dsc*dp*icFFiscFFipFF*");
MODULE_ALIAS("usb:v1BBBp0000d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1011p3198d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v20B9p1682d*dc*dsc*dp*ic*isc*ip*");
MODULE_ALIAS("usb:v1C9Ep9603d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "6604EB8BBB1E34FA3626D44");