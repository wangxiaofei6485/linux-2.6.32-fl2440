cmd_arch/arm/mm/abort-ev5tj.o := /usr/local/opt/FriendlyARM/toolschain/4.4.3/bin/arm-linux-gcc -Wp,-MD,arch/arm/mm/.abort-ev5tj.o.d  -nostdinc -isystem /usr/local/opt/FriendlyARM/toolschain/4.4.3/bin/../lib/gcc/arm-none-linux-gnueabi/4.4.3/include -Iinclude  -I/home/wxf/桌面/linux/kernel_code/linux-2.6.32.2/arch/arm/include -include include/linux/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-s3c2410/include -Iarch/arm/mach-s3c2400/include -Iarch/arm/mach-s3c2412/include -Iarch/arm/mach-s3c2440/include -Iarch/arm/mach-s3c2442/include -Iarch/arm/mach-s3c2443/include -Iarch/arm/plat-s3c24xx/include -Iarch/arm/plat-s3c/include -D__ASSEMBLY__ -mabi=apcs-gnu -mno-thumb-interwork  -D__LINUX_ARM_ARCH__=4 -march=armv4t -mtune=arm9tdmi -include asm/unified.h -msoft-float -gdwarf-2       -c -o arch/arm/mm/abort-ev5tj.o arch/arm/mm/abort-ev5tj.S

deps_arch/arm/mm/abort-ev5tj.o := \
  arch/arm/mm/abort-ev5tj.S \
  /home/wxf/桌面/linux/kernel_code/linux-2.6.32.2/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  /home/wxf/桌面/linux/kernel_code/linux-2.6.32.2/arch/arm/include/asm/linkage.h \
  /home/wxf/桌面/linux/kernel_code/linux-2.6.32.2/arch/arm/include/asm/assembler.h \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/smp.h) \
  /home/wxf/桌面/linux/kernel_code/linux-2.6.32.2/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/arm/thumb.h) \
  /home/wxf/桌面/linux/kernel_code/linux-2.6.32.2/arch/arm/include/asm/hwcap.h \
  arch/arm/mm/abort-macro.S \

arch/arm/mm/abort-ev5tj.o: $(deps_arch/arm/mm/abort-ev5tj.o)

$(deps_arch/arm/mm/abort-ev5tj.o):
