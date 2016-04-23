#pragma once

#include <linux/netdevice.h>

int can_change_mtu(struct net_device *dev, int new_mtu);
