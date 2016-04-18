build with:

make -C /lib/modules/`uname -r`/build M=$PWD

load with:

modprobe can_raw can_dev can
insmod gs_usb.ko

