cmd_net/ipv4/ip_gre.ko := /usr/local/opt/FriendlyARM/toolschain/4.4.3/bin/arm-linux-ld -EL -r  -T /home/wxf/kernel_code/mini2440/linux-2.6.32.2/scripts/module-common.lds --build-id -o net/ipv4/ip_gre.ko net/ipv4/ip_gre.o net/ipv4/ip_gre.mod.o