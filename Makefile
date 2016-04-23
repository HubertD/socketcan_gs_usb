obj-m += gs_usb.o
gs_usb-y := can_change_mtu.o
ccflags-y := -include $(src)/can_change_mtu.h

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
