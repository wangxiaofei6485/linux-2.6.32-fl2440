cmd_drivers/input/mouse/appletouch.ko := /usr/local/opt/FriendlyARM/toolschain/4.4.3/bin/arm-linux-ld -EL -r  -T /home/wxf/kernel_code/mini2440/linux-2.6.32.2/scripts/module-common.lds --build-id -o drivers/input/mouse/appletouch.ko drivers/input/mouse/appletouch.o drivers/input/mouse/appletouch.mod.o