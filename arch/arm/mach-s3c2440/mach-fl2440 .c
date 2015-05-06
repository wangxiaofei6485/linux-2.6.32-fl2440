/* linux/arch/arm/mach-s3c2440/mach-smdk2440.c
 *
 * Copyright (c) 2004,2005 Simtec Electronics
 *	Ben Dooks <ben@simtec.co.uk>
 *
 * http://www.fluff.org/ben/smdk2440/
 *
 * Thanks to Dimity Andric and TomTom for the loan of an SMDK2440.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
*/

#include <linux/kernel.h>
#include <linux/types.h>
#include <linux/interrupt.h>
#include <linux/list.h>
#include <linux/timer.h>
#include <linux/init.h>
#include <linux/serial_core.h>
#include <linux/platform_device.h>
#include <linux/io.h>

#include <asm/mach/arch.h>
#include <asm/mach/map.h>
#include <asm/mach/irq.h>

#include <mach/hardware.h>
#include <asm/irq.h>
#include <asm/mach-types.h>

#include <plat/regs-serial.h>
#include <mach/regs-gpio.h>
#include <mach/regs-lcd.h>

#include <mach/idle.h>
#include <mach/fb.h>
#include <plat/iic.h>

#include <plat/s3c2410.h>
#include <plat/s3c2440.h>
#include <plat/clock.h>
#include <plat/devs.h>
#include <plat/cpu.h>

#include <plat/common-smdk.h>

static struct map_desc smdk2440_iodesc[] __initdata = {
	/* ISA IO Space map (memory space selected by A24) */

	{
		.virtual	= (u32)S3C24XX_VA_ISA_WORD,
		.pfn		= __phys_to_pfn(S3C2410_CS2),
		.length		= 0x10000,
		.type		= MT_DEVICE,
	}, {
		.virtual	= (u32)S3C24XX_VA_ISA_WORD + 0x10000,
		.pfn		= __phys_to_pfn(S3C2410_CS2 + (1<<24)),
		.length		= SZ_4M,
		.type		= MT_DEVICE,
	}, {
		.virtual	= (u32)S3C24XX_VA_ISA_BYTE,
		.pfn		= __phys_to_pfn(S3C2410_CS2),
		.length		= 0x10000,
		.type		= MT_DEVICE,
	}, {
		.virtual	= (u32)S3C24XX_VA_ISA_BYTE + 0x10000,
		.pfn		= __phys_to_pfn(S3C2410_CS2 + (1<<24)),
		.length		= SZ_4M,
		.type		= MT_DEVICE,
	}
};

#define UCON S3C2410_UCON_DEFAULT | S3C2410_UCON_UCLK
#define ULCON S3C2410_LCON_CS8 | S3C2410_LCON_PNONE | S3C2410_LCON_STOPB
#define UFCON S3C2410_UFCON_RXTRIG8 | S3C2410_UFCON_FIFOMODE
static struct s3c2410_uartcfg smdk2440_uartcfgs[] __initdata = {
	[0] = {
		.hwport	     = 0,
		.flags	     = 0,
		.ucon	     = 0x3c5,
		.ulcon	     = 0x03,
		.ufcon	     = 0x51,
	},
	[1] = {
		.hwport	     = 1,
		.flags	     = 0,
		.ucon	     = 0x3c5,
		.ulcon	     = 0x03,
		.ufcon	     = 0x51,
	},
	/* IR port */
	[2] = {
		.hwport	     = 2,
		.flags	     = 0,
		.ucon	     = 0x3c5,
		.ulcon	     = 0x43,
		.ufcon	     = 0x51,
	}
};

/* LCD driver info */

static struct s3c2410fb_display smdk2440_lcd_cfg __initdata = {

	.lcdcon5	= S3C2410_LCDCON5_FRM565 |
			  S3C2410_LCDCON5_INVVLINE |
			  S3C2410_LCDCON5_INVVFRAME |
			  S3C2410_LCDCON5_PWREN |
			  S3C2410_LCDCON5_HWSWP,

	.type		= S3C2410_LCDCON1_TFT,

	.width		= 240,
	.height		= 320,

	.pixclock	= 166667, /* HCLK 60 MHz, divisor 10 */
	.xres		= 240,
	.yres		= 320,
	.bpp		= 16,
	.left_margin	= 20,
	.right_margin	= 8,
	.hsync_len	= 4,
	.upper_margin	= 8,
	.lower_margin	= 7,
	.vsync_len	= 4,
};

static struct s3c2410fb_mach_info smdk2440_fb_info __initdata = {
	.displays	= &smdk2440_lcd_cfg,
	.num_displays	= 1,
	.default_display = 0,

#if 0
	/* currently setup by downloader */
	.gpccon		= 0xaa940659,
	.gpccon_mask	= 0xffffffff,
	.gpcup		= 0x0000ffff,
	.gpcup_mask	= 0xffffffff,
	.gpdcon		= 0xaa84aaa0,
	.gpdcon_mask	= 0xffffffff,
	.gpdup		= 0x0000faff,
	.gpdup_mask	= 0xffffffff,
#endif

	.lpcsel		= ((0xCE6) & ~7) | 1<<4,
};
//fl2440 nand 分区
static struct mtd_partition fl2440_default_nand_part[]={
	[0]={
		.name = "boot",
		.size = 0x20000,
		.offset = 0
	},
	[1]={
		.name = "bootParam",
		.size= 0x60000,
		.offset= 0x20000
	},
	[2]={
		.name = "pic",
		.size = 0x100000,
		.offset = 0x80000
	},
	[3]={
		.name = "MyApp",
		.size = 0x380000,
		.offset = 0x180000
	},
	[4] ={
		.name = "kernel",
		.size = 0x300000,
		.offset = 0x500000
	},
	[5] ={
		.name = "fs_yaffs",
		.size = 0x3c00000,
		.offset = 0x800000
	},
	[6]={
		.name ="eboot",
		.size = 0x80000,
		.offset = 0x4400000
	},
	[7]={
		.name = "wince",
		.size = 0x3b80000,
		.name = 0x4480000
	}

};
//nand 设置表
static struct s3c2410_nand_set fl2440_nand_sets[]={
	[0]={
		.name = "NAND",
		.nr_chips=1,
		.nr_partitions = ARRAY_SIZE(fl2440_default_nand_part),
		.partitions= fl2440_default_nnad_part,
	}
};

//nand 本身的特性 ，查看datasheet
//
static struct s3c2410_platform_nand fl2440_nand_info={
	.tals= 20,
	.twrph0 =60,
	.twrph1 = 20,
	.nr_sets =ARRAY_SIZE(fl2440_nand_sets),
	.sets = fl2440_nand_sets,
	.ignore_unset_ecc=1,
};


static struct platform_device *fl2440_devices[] __initdata = {
	&s3c_device_usb,
	&s3c_device_lcd,
	&s3c_device_wdt,
	&s3c_device_i2c0,
	&s3c_device_iis,
	&s3c_device_nand,

};

static void __init fl2440_map_io(void)
{
	s3c24xx_init_io(smdk2440_iodesc, ARRAY_SIZE(smdk2440_iodesc));
	//s3c24xx_init_clocks(16934400);
	s3c24xx_init_clocks(12000000);//12M/S
	s3c24xx_init_uarts(smdk2440_uartcfgs, ARRAY_SIZE(smdk2440_uartcfgs));
}

static void __init fl2440_machine_init(void)
{
	s3c24xx_fb_set_platdata(&smdk2440_fb_info);
	s3c_i2c0_set_platdata(NULL);

	platform_add_devices(smdk2440_devices, ARRAY_SIZE(smdk2440_devices));
	//smdk_machine_init();//初始化Led

	s3c_device_nand.dev.platform_data = &fl2440_nand_info;
	//s3c_device_sdi.dev.platform_data = &
	platform_add_devices(fl2440_devices,ARRAY_SIZE(fl2440_devices));
}

MACHINE_START(FL2440, "FL2440")
	/* Maintainer: Ben Dooks <ben@fluff.org> */
	.phys_io	= S3C2410_PA_UART,
	.io_pg_offst	= (((u32)S3C24XX_VA_UART) >> 18) & 0xfffc,
	.boot_params	= S3C2410_SDRAM_PA + 0x100,

	.init_irq	= s3c24xx_init_irq,
	.map_io		= fl2440_map_io,
	.init_machine	= fl2440_machine_init,
	.timer		= &s3c24xx_timer,
MACHINE_END
