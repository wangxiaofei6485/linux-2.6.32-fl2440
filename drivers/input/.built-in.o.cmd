cmd_drivers/input/built-in.o :=  /usr/local/opt/FriendlyARM/toolschain/4.4.3/bin/arm-linux-ld -EL    -r -o drivers/input/built-in.o drivers/input/input-core.o drivers/input/mousedev.o drivers/input/evdev.o drivers/input/keyboard/built-in.o drivers/input/mouse/built-in.o drivers/input/joystick/built-in.o drivers/input/touchscreen/built-in.o drivers/input/misc/built-in.o 