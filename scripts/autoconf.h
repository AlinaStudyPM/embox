#ifndef _AUTOCONF_H_
#define _AUTOCONF_H_

#define START_MSG "\nWelcome to Monitor shell and have a lot of fun..."
#define PROMPT "monitor> "
#define MD5_CHECKSUM "0"

/* Arch */
#define MONITOR_ARCH_SPARC 1

/* Verbous levels */
#define _ERROR 1
#define _TRACE 1
#undef _DEBUG
#undef _WARN

/* Build targets (only one may be chosen) */
#undef SIMULATION_TRG
#define DEBUG_TRG 1
#undef RELEASE_TRG
#undef DOXYGEN_TRG

/* Conio */
#define MONITOR_CONIO 1

/* Misc */
#define MONITOR_MISC 1

/* "File system" */
#define MONITOR_FS 1

/* Network */
#define MONITOR_NETWORK 1
#define MONITOR_NET_ARP 1
#define MONITOR_NET_DHCP 1
#define MONITOR_NET_ETH 1
#define MONITOR_NET_ICMP 1
#define MONITOR_NET_IP_V4 1
#define MONITOR_NET_TFTP 1
#define MONITOR_NET_UDP 1

/* Tests */
#define MONITOR_TESTS 1
#define MONITOR_TEST_CPU_CONTEXT 1
#undef MONITOR_TEST_IRQ_AVAILABILITY
#define MONITOR_TEST_SOFT_TRAPS 1
#undef MONITOR_TEST_CHECKSUM
#undef MONITOR_TEST_MMU

/* Drivers */
#define MONITOR_DRIVERS 1
#define MONITOR_DRIVER_AMBA_PNP 1
#define MONITOR_DRIVER_GAISLER_IRQ_CTRL 1
#define MONITOR_DRIVER_GAISLER_UART 1
#define MONITOR_DRIVER_GAISLER_TIMER 1

/* Shell commands */
#define MONITOR_USERS 1
#define MONITOR_USER_ARP 1
#define MONITOR_USER_ETH 1
#define MONITOR_USER_GOTO 1
#define MONITOR_USER_HELP 1
#define MONITOR_USER_LDIMG 1
#define MONITOR_USER_LSPNP 1
#define MONITOR_USER_MEM 1
#define MONITOR_USER_MMU_PROBE 1
#define MONITOR_USER_PING 1
#define MONITOR_USER_UDPD 1
#define MONITOR_USER_WMEM 1

#endif /* _AUTOCONF_H_ */
