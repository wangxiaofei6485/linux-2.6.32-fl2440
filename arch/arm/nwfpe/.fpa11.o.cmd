cmd_arch/arm/nwfpe/fpa11.o := /usr/local/opt/FriendlyARM/toolschain/4.4.3/bin/arm-linux-gcc -Wp,-MD,arch/arm/nwfpe/.fpa11.o.d  -nostdinc -isystem /usr/local/opt/FriendlyARM/toolschain/4.4.3/bin/../lib/gcc/arm-none-linux-gnueabi/4.4.3/include -Iinclude  -I/home/wxf/kernel_code/mini2440/linux-2.6.32.2/arch/arm/include -include include/linux/autoconf.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-s3c2410/include -Iarch/arm/mach-s3c2400/include -Iarch/arm/mach-s3c2412/include -Iarch/arm/mach-s3c2440/include -Iarch/arm/mach-s3c2442/include -Iarch/arm/mach-s3c2443/include -Iarch/arm/plat-s3c24xx/include -Iarch/arm/plat-s3c/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -marm -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -D__LINUX_ARM_ARCH__=4 -march=armv4t -mtune=arm9tdmi -msoft-float -Uarm -Wframe-larger-than=1024 -fno-stack-protector -fomit-frame-pointer -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fno-dwarf2-cfi-asm -fconserve-stack   -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(fpa11)"  -D"KBUILD_MODNAME=KBUILD_STR(nwfpe)"  -c -o arch/arm/nwfpe/fpa11.o arch/arm/nwfpe/fpa11.c

deps_arch/arm/nwfpe/fpa11.o := \
  arch/arm/nwfpe/fpa11.c \
    $(wildcard include/config/fpe/nwfpe/xp.h) \
  arch/arm/nwfpe/fpa11.h \
  include/linux/thread_info.h \
    $(wildcard include/config/compat.h) \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  /home/wxf/kernel_code/mini2440/linux-2.6.32.2/arch/arm/include/asm/types.h \
  include/asm-generic/int-ll64.h \
  /home/wxf/kernel_code/mini2440/linux-2.6.32.2/arch/arm/include/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/linux/posix_types.h \
  include/linux/stddef.h \
  include/linux/compiler.h \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
  /home/wxf/kernel_code/mini2440/linux-2.6.32.2/arch/arm/include/asm/posix_types.h \
  include/linux/bitops.h \
    $(wildcard include/config/generic/find/first/bit.h) \
    $(wildcard include/config/generic/find/last/bit.h) \
    $(wildcard include/config/generic/find/next/bit.h) \
  /home/wxf/kernel_code/mini2440/linux-2.6.32.2/arch/arm/include/asm/bitops.h \
    $(wildcard include/config/smp.h) \
  /home/wxf/kernel_code/mini2440/linux-2.6.32.2/arch/arm/include/asm/system.h \
    $(wildcard include/config/cpu/xsc3.h) \
    $(wildcard include/config/cpu/fa526.h) \
    $(wildcard include/config/cpu/sa1100.h) \
    $(wildcard include/config/cpu/sa110.h) \
    $(wildcard include/config/cpu/32v6k.h) \
  include/linux/linkage.h \
  /home/wxf/kernel_code/mini2440/linux-2.6.32.2/arch/arm/include/asm/linkage.h \
  include/linux/irqflags.h \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/irqsoff/tracer.h) \
    $(wildcard include/config/preempt/tracer.h) \
    $(wildcard include/config/trace/irqflags/support.h) \
    $(wildcard include/config/x86.h) \
  include/linux/typecheck.h \
  /home/wxf/kernel_code/mini2440/linux-2.6.32.2/arch/arm/include/asm/irqflags.h \
  /home/wxf/kernel_code/mini2440/linux-2.6.32.2/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/arm/thumb.h) \
  /home/wxf/kernel_code/mini2440/linux-2.6.32.2/arch/arm/include/asm/hwcap.h \
  include/asm-generic/cmpxchg-local.h \
  include/asm-generic/cmpxchg.h \
  include/asm-generic/bitops/non-atomic.h \
  include/asm-generic/bitops/ffz.h \
  include/asm-generic/bitops/__fls.h \
  include/asm-generic/bitops/__ffs.h \
  include/asm-generic/bitops/fls.h \
  include/asm-generic/bitops/ffs.h \
  include/asm-generic/bitops/fls64.h \
  include/asm-generic/bitops/sched.h \
  include/asm-generic/bitops/hweight.h \
  include/asm-generic/bitops/lock.h \
  /home/wxf/kernel_code/mini2440/linux-2.6.32.2/arch/arm/include/asm/thread_info.h \
    $(wildcard include/config/arm/thumbee.h) \
  /home/wxf/kernel_code/mini2440/linux-2.6.32.2/arch/arm/include/asm/fpstate.h \
    $(wildcard include/config/vfpv3.h) \
    $(wildcard include/config/iwmmxt.h) \
  /home/wxf/kernel_code/mini2440/linux-2.6.32.2/arch/arm/include/asm/domain.h \
    $(wildcard include/config/io/36.h) \
    $(wildcard include/config/mmu.h) \
  arch/arm/nwfpe/fpsr.h \
  arch/arm/nwfpe/milieu.h \
  arch/arm/nwfpe/ARM-gcc.h \
  arch/arm/nwfpe/softfloat.h \
  arch/arm/nwfpe/fpopcode.h \
  arch/arm/nwfpe/fpmodule.h \
    $(wildcard include/config/cpu.h) \
  arch/arm/nwfpe/fpmodule.inl \
  include/linux/string.h \
    $(wildcard include/config/binary/printf.h) \
  /usr/local/opt/FriendlyARM/toolschain/4.4.3/bin/../lib/gcc/arm-none-linux-gnueabi/4.4.3/include/stdarg.h \
  /home/wxf/kernel_code/mini2440/linux-2.6.32.2/arch/arm/include/asm/string.h \

arch/arm/nwfpe/fpa11.o: $(deps_arch/arm/nwfpe/fpa11.o)

$(deps_arch/arm/nwfpe/fpa11.o):