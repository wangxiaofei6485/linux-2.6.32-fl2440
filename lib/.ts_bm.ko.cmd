cmd_lib/ts_bm.ko := /usr/local/opt/FriendlyARM/toolschain/4.4.3/bin/arm-linux-ld -EL -r  -T /home/wxf/kernel_code/mini2440/linux-2.6.32.2/scripts/module-common.lds --build-id -o lib/ts_bm.ko lib/ts_bm.o lib/ts_bm.mod.o