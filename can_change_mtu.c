#include <linux/netdevice.h>

#pragma weak can_change_mtu

int can_change_mtu(struct net_device *dev, int new_mtu)
{
        /* Do not allow changing the MTU while running */
        if (dev->flags & IFF_UP)
                return -EBUSY;
        dev->mtu = new_mtu;
        return 0;
}
