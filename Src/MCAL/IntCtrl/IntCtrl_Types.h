/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  IntCtrl_Types.h
 *
 *  Description:  Interrupt controllr config file
 *
 * 		 Author: Abdullah Mohammed Al-Maghraby
 *
 *********************************************************************************************************************/
#ifndef <INT_CTRL_TYPES_H>
#define <INT_CTRL_TYPES_H>

 /*********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "std_types.h"

 /*********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


 /*********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


 /*********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef enum {
	RESET = 1,
	NMI,
	HARD_FAULT,
	MEMORY_MANAGEMENT,
	BUS_FAULT,
	USAGE_FAULT,
	SV_CALL=11,
	DEBUG_MONITOR,
	PEND_SV=14,
	SYS_TICK,
}IntCtrl_exceptionType;

typedef enum {
    NVIC_GPIO_A = 0,
    NVIC_GPIO_B,
    NVIC_GPIO_C,
    NVIC_GPIO_D,
    NVIC_GPIO_E,
    NVIC_UART0,
    NVIC_UART1,
    NVIC_SSI0,
    NVIC_I2C0,
    NVIC_PWM0_FAULT,
    NVIC_PWM0_GEN0,
    NVIC_PWM0_GEN1,
    NVIC_PWM0_GEN2,
    NVIC_QEI0,
    NVIC_ADC0_SEQ0,
    NVIC_ADC0_SWQ1,
    NVIC_ADC0_SEQ2,
    NVIC_ADC0_SEQ3,
    NVIC_WATCHDOG_TIMERS_0_1,
    NVIC_TIMER0A,
    NVIC_TIMER0B,
    NVIC_TIMER1A,
    NVIC_TIMER1B,
    NVIC_TIMER2A,
    NVIC_TIMER2B,
    NVIC_ANALOG_COMP0,
    NVIC_ANALOG_COMP1,
    NVIC_SYS_CONTROL = 28,
    NVIC_FLASH_MEMORY_EEPROM_CONTROL,
    NVIC_GPIO_F,
    NVIC_UART2 = 33,
    NVIC_SSI1,
    NVIC_TIMER3A,
    NVIC_TIMER3B,
    NVIC_I2CI,
    NVIC_QEI1,
    NVIC_CAN0,
    NVIC_CAN1,
    NVIC_HIBERNATION_MODULE = 43,
    NVIC_USB,
    NVIC_PWM_GEN,
    NVIC_DMA_SOFTWARE,
    NVIC_DMA_ERROR,
    NVIC_ADC1_SEQ0,
    NVIC_ADC1_SEQ1,
    NVIC_ADC1_SEQ2,
    NVIC_ADC1_SEQ3,
    NVIC_SSI2 = 57,
    NVIC_SSI3,
    NVIC_UART3,
    NVIC_UART4,
    NVIC_UART5,
    NVIC_UART6,
    NVIC_UART7,
    NVIC_I2C2 = 68,
    NVIC_I2C3,
    NVIC_TIMER4A,
    NVIC_TIMER4B,
    NVIC_TIMER5A = 92,
    NVIC_Timer5B,
    NVIC_WIDE_TIMER0A,
    NVIC_WIDE_TIMER0B,
    NVIC_WIDE_TIMER1A,
    NVIC_WIDE_TIMER1B,
    NVIC_WIDE_TIMER2A,
    NVIC_WIDE_TIMER2B,
    NVIC_WIDE_TIMER3A,
    NVIC_WIDE_TIMER3B,
    NVIC_WIDE_TIMER4A,
    NVIC_WIDE_TIMER4B,
    NVIC_WIDE_TIMER5A,
    NVIC_WIDE_TIMER5B,
    NVIC_SYS_EXCEPTION,
    NVIC_PWM1_GEN0 = 134,
    NVIC_PWM1_GEN1,
    NVIC_PWM1_GEN2,
    NVIC_PWM1_GEN3,
    NVIC_PWM1_FAULT
}IntCtrl_interruptType;

typedef struct {
    IntCtrl_interruptType s_interrupt;
    uint8 s_groupPriority;
    uint8 s_subGroupPriority;
}IntCtrl_configType;
 /*********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/


 /*********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


#endif  /* INT_CTRL_TYPES_H */

 /*********************************************************************************************************************
 *  END OF FILE: IntCtrl_Types.h
 *********************************************************************************************************************/