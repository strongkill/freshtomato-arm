/*
 *
 * FreshTomato Firmware
 *
 */

#ifndef _ipv6_shared_h_
#define _ipv6_shared_h_

#define TOMATO_DUID_MAX_LEN	64
#define TOMATO_DUID_GUI		"/var/dhcp6c_duid_gui"

#define IPV6_MIN_LIFETIME	120
#define ONEMONTH_LIFETIME	(30 * 24 * 60 * 60)
#define INFINITE_LIFETIME 	0xffffffff

#endif /* _ipv6_shared_h_ */
