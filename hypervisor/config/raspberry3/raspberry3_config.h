#ifndef _MINOS_RASPBERRY3_CONFIG_H_
#define _MINOS_RASPBERRY3_CONFIG_H_

#define ARCH_AARCH64
#define CONFIG_PLATFORM_RASPBERRY3

#define CONFIG_RAM_START_ADDRESS	0x00000000
#define CONFIG_RAM_SIZE			0x3f000000

#define CONFIG_MINOS_START_ADDRESS	(0x28000000)
#define CONFIG_MINOS_RAM_SIZE		(368 * 1024 *1024)

#define CONFIG_MAX_CPU_NR		(8)
#define CONFIG_NR_CPUS			(4)
#define CONFIG_NR_CPUS_CLUSTER0		(4)
#define CONFIG_NR_CPUS_CLUSTER1		(0)
#define CONFIG_MAX_VM			(64)

#define CONFIG_PLATFORM_NAME		"raspberry3"

#define CONFIG_LOG_LEVEL		3

#define CONFIG_SCHED_INTERVAL		(20)

/*
 * The below interrupt in arm fvp is used to g0 or
 * G1S irqs handled in EL3
 *
 * #define ARM_IRQ_SEC_PHY_TIMER	29
 * #define ARM_IRQ_SEC_SGI_0		8
 * #define ARM_IRQ_SEC_SGI_1		9
 * #define ARM_IRQ_SEC_SGI_2		10
 * #define ARM_IRQ_SEC_SGI_3		11
 * #define ARM_IRQ_SEC_SGI_4		12
 * #define ARM_IRQ_SEC_SGI_5		13
 * #define ARM_IRQ_SEC_SGI_6		14
 * #define ARM_IRQ_SEC_SGI_7		15
 */
#define CONFIG_MINOS_RESCHED_IRQ	(7)

#define CONFIG_MAX_SLAB_BLOCKS		(10)

#define CONFIG_UART_BASE		(0x3f215040)
#define CONFIG_UART_IO_SIZE		(0x1000)

#define CONFIG_PLATFORM_ADDRESS_RANGE	(40)
#define CONFIG_PLATFORM_IO_BASE		(0x3f000000UL)
#define CONFIG_PLATFORM_DRAM_BASE	(0x00000000)

#define CONFIG_BOOTMEM_SIZE		(64 * 1024)

#define IDLE_VCPU_STATCK_SIZE		(8 * 1024)
#define IDLE_VCPU_STATCK_SHIFT		(13)

/* no hardware gicv2 or gicv3 */
#define CONFIG_LEGACY_INT_VIRT
#define CONFIG_HVM_SPI_VIRQ_NR		(96)
#define CONFIG_SMPBOOT_SPIN_TABLE

#endif