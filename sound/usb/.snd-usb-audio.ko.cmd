cmd_sound/usb/snd-usb-audio.ko := /usr/local/opt/FriendlyARM/toolschain/4.4.3/bin/arm-linux-ld -EL -r  -T /home/wxf/kernel_code/mini2440/linux-2.6.32.2/scripts/module-common.lds --build-id -o sound/usb/snd-usb-audio.ko sound/usb/snd-usb-audio.o sound/usb/snd-usb-audio.mod.o