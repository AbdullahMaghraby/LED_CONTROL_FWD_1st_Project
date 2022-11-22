/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  mcu_hw.h
 *
 *  Description:  Hardware related settings including Addresses and Types
 *
 * 		 Author: Abdullah Mohammed Al-Maghraby
 *
 *********************************************************************************************************************/
#ifndef <MCU_HW_H>
#define <MCU_HW_H>

 /*********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "std_types.h"

 /*********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define SYSTEM_CONTROL_BASE_ADDRESS 0x400FE000

/*Clock Configuration*/
#define RCC_REG				(*((volatile uint32 *)(SYSTEM_CONTROL_BASE_ADDRESS+0x060)))
#define RIS_REG				(*((volatile uint32 *)(SYSTEM_CONTROL_BASE_ADDRESS+0x050)))

/*Peripheral Clock Gating Adresses*/
#define RCGCWD_REG			(*((volatile uint32 *)(SYSTEM_CONTROL_BASE_ADDRESS+0x600)))
#define RCGCTIMER_REG		(*((volatile uint32 *)(SYSTEM_CONTROL_BASE_ADDRESS+0x604)))
#define RCGCGPIO_REG		(*((volatile uint32 *)(SYSTEM_CONTROL_BASE_ADDRESS+0x608)))
#define RCGCDMA_REG			(*((volatile uint32 *)(SYSTEM_CONTROL_BASE_ADDRESS+0x60C)))
#define RCGCHIB_REG			(*((volatile uint32 *)(SYSTEM_CONTROL_BASE_ADDRESS+0x614)))
#define RCGCUART_REG		(*((volatile uint32 *)(SYSTEM_CONTROL_BASE_ADDRESS+0x618)))
#define RCGCSSI_REG			(*((volatile uint32 *)(SYSTEM_CONTROL_BASE_ADDRESS+0x61C)))
#define RCGCI2C_REG			(*((volatile uint32 *)(SYSTEM_CONTROL_BASE_ADDRESS+0x620)))
#define RCGCUSB_REG			(*((volatile uint32 *)(SYSTEM_CONTROL_BASE_ADDRESS+0x628)))
#define RCGCCAN_REG			(*((volatile uint32 *)(SYSTEM_CONTROL_BASE_ADDRESS+0x634)))
#define RCGCADC_REG			(*((volatile uint32 *)(SYSTEM_CONTROL_BASE_ADDRESS+0x638)))
#define RCGCACMP_REG		(*((volatile uint32 *)(SYSTEM_CONTROL_BASE_ADDRESS+0x63C)))
#define RCGCPWM_REG			(*((volatile uint32 *)(SYSTEM_CONTROL_BASE_ADDRESS+0x640)))
#define RCGCQEI_REG			(*((volatile uint32 *)(SYSTEM_CONTROL_BASE_ADDRESS+0x644)))
#define RCGCEEPROM_REG		(*((volatile uint32 *)(SYSTEM_CONTROL_BASE_ADDRESS+0x658)))
#define RCGCWTIMER_REG		(*((volatile uint32 *)(SYSTEM_CONTROL_BASE_ADDRESS+0x65C)))

/*Interrupt Controller */
#define CORE_PERIPHERALS_BASE_ADDRESS 0x400FE000

/*NVIC Registers */
#define NVIC_EN0                (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x100)))
#define NVIC_EN1                (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x104)))
#define NVIC_EN2                (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x108)))
#define NVIC_EN3                (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x10C)))
#define NVIC_EN4                (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x110)))
#define NVIC_DIS0               (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x180)))
#define NVIC_DIS1               (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x184)))
#define NVIC_DIS2               (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x188)))
#define NVIC_DIS3               (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x18C)))
#define NVIC_DIS4               (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x190)))
#define NVIC_UNPEND0            (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x200)))
#define NVIC_UNPEND1            (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x204)))
#define NVIC_UNPEND2            (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x208)))
#define NVIC_UNPEND3            (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x20C)))
#define NVIC_UNPEND4            (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x210)))
#define NVIC_ACTIVE0            (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x280)))
#define NVIC_ACTIVE1            (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x284)))
#define NVIC_ACTIVE2            (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x288)))
#define NVIC_ACTIVE3            (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x28C)))
#define NVIC_ACTIVE4            (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x290)))
#define NVIC_PRI0               (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x400)))
#define NVIC_PRI1               (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x404)))
#define NVIC_PRI2               (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x408)))
#define NVIC_PRI3               (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x40C)))
#define NVIC_PRI4               (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x410)))
#define NVIC_PRI5               (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x414)))
#define NVIC_PRI6               (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x418)))
#define NVIC_PRI7               (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x41C)))
#define NVIC_PRI8               (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x420)))
#define NVIC_PRI9               (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x424)))
#define NVIC_PRI10              (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x428)))
#define NVIC_PRI11              (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x42C)))
#define NVIC_PRI12              (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x430)))
#define NVIC_PRI13              (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x434)))
#define NVIC_PRI14              (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x438)))
#define NVIC_PRI15              (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x43C)))
#define NVIC_PRI16              (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x440)))
#define NVIC_PRI17              (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x444)))
#define NVIC_PRI18              (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x448)))
#define NVIC_PRI19              (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x44C)))
#define NVIC_PRI20              (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x450)))
#define NVIC_PRI21              (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x454)))
#define NVIC_PRI22              (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x458)))
#define NVIC_PRI23              (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x45C)))
#define NVIC_PRI24              (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x460)))
#define NVIC_PRI25              (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x464)))
#define NVIC_PRI26              (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x468)))
#define NVIC_PRI27              (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x46C)))
#define NVIC_PRI28              (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x470)))
#define NVIC_PRI29              (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x474)))
#define NVIC_PRI30              (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x478)))
#define NVIC_PRI31              (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x47C)))
#define NVIC_PRI32              (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x480)))
#define NVIC_PRI33              (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x484)))
#define NVIC_PRI34              (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0x488)))

/*SCB Registers*/
#define SCB_INTCTRL             (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0xD04)))
#define SCB_SYSHNDCTRL          (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0xD24)))
#define SCB_SYSPRI1             (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0xD18)))
#define SCB_SYSPRI2             (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0xD1C)))
#define SCB_SYSPRI3             (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0xD20)))
#define SCB_APINT               (*((volatile uint32 *)(CORE_PERIPHERALS_BASE_ADDRESS+0xD0C)))

/*GPIO Registers */
#define PORTA_BASE_ADDRESS		0x40004000
#define PORTA_DIR_REG			(*((volatile uint32 *)(PORTA_BASE_ADDRESS+0x400)))
#define PORTA_DATA_REG			(*((volatile uint32 *)(PORTA_BASE_ADDRESS+0x3FC)))

#define PORTB_BASE_ADDRESS		0x40005000
#define PORTB_DIR_REG			(*((volatile uint32 *)(PORTB_BASE_ADDRESS+0x400)))
#define PORTB_DATA_REG			(*((volatile uint32 *)(PORTB_BASE_ADDRESS+0x3FC)))

#define PORTC_BASE_ADDRESS		0x40006000
#define PORTC_DIR_REG			(*((volatile uint32 *)(PORTC_BASE_ADDRESS+0x400)))
#define PORTC_DATA_REG			(*((volatile uint32 *)(PORTC_BASE_ADDRESS+0x3FC)))

#define PORTD_BASE_ADDRESS		0x40007000
#define PORTD_DIR_REG			(*((volatile uint32 *)(PORTD_BASE_ADDRESS+0x400)))
#define PORTD_DATA_REG			(*((volatile uint32 *)(PORTD_BASE_ADDRESS+0x3FC)))

#define PORTE_BASE_ADDRESS		0x40024000
#define PORTE_DIR_REG			(*((volatile uint32 *)(PORTEBASE_ADDRESS+0x400)))
#define PORTE_DATA_REG			(*((volatile uint32 *)(PORTEBASE_ADDRESS+0x3FC)))

#define PORTF_BASE_ADDRESS		0x40025000
#define PORTF_DIR_REG			(*((volatile uint32 *)(PORTFBASE_ADDRESS+0x400)))
#define PORTF_DATA_REG			(*((volatile uint32 *)(PORTFBASE_ADDRESS+0x3FC)))

#define PERIPHERAL_BIT_BAND_BASE							0x40000000
#define PERIPHERAL_ALIAS_BASE								0x42000000

/*Timer Registers */
#define  TIMER0_BASE_ADDRESS								0x40030000
#define  TIMER1_BASE_ADDRESS							    0x40031000
#define  TIMER2_BASE_ADDRESS							    0x40032000
#define  TIMER3_BASE_ADDRESS								0x40033000
#define  TIMER4_BASE_ADDRESS							    0x40034000
#define  TIMER5_BASE_ADDRESS							    0x40035000
#define  WIDE_TIMER0_BASE_ADDRESS							0x40036000
#define  WIDE_TIMER1_BASE_ADDRESS						    0x40037000
#define  WIDE_TIMER2_BASE_ADDRESS						    0x4004C000
#define  WIDE_TIMER3_BASE_ADDRESS					        0x4004D000
#define  WIDE_TIMER4_BASE_ADDRESS					        0x4004E000
#define  WIDE_TIMER5_BASE_ADDRESS					        0x4004F000

/*Timer 0 configuration */
#define GPTMCFG_REG				(*((volatile uint32 *)(TIMER0_BASE_ADDRESS+0x000)))
#define GPTMT0AMR_REG			(*((volatile uint32 *)(TIMER0_BASE_ADDRESS+0x004)))
#define GPTMT0BMR_REG			(*((volatile uint32 *)(TIMER0_BASE_ADDRESS+0x008)))
#define GPTMCTL_REG				(*((volatile uint32 *)(TIMER0_BASE_ADDRESS+0x00C)))
#define GPTMIMR_REG				(*((volatile uint32 *)(TIMER0_BASE_ADDRESS+0x018)))
#define GPTMTAV_REG				(*((volatile uint32 *)(TIMER0_BASE_ADDRESS+0x050)))


 /*********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/
 

/*********************************************************************************************************************
*  GLOBAL DATA TYPES AND STRUCTURES
*********************************************************************************************************************/



/*********************************************************************************************************************
*  GLOBAL DATA PROTOTYPES
*********************************************************************************************************************/


/*********************************************************************************************************************
*  GLOBAL FUNCTION PROTOTYPES
*********************************************************************************************************************/


#endif  /* MCU_HW_H */

/*********************************************************************************************************************
*  END OF FILE: mcu_hw.h
*********************************************************************************************************************/