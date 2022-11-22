/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  led.c
 *
 *  Description:  LED Source file
 *
 * 		 Author: Abdullah Mohammed Al-Maghraby
 *
 *********************************************************************************************************************/

 /****************************************************************************
 *  INCLUDES
 *****************************************************************************/
#include "led.h"

 /***************************************************************************
 *  LOCAL MACROS CONSTANT\FUNCTION
 *****************************************************************************/

 /****************************************************************************
 *  LOCAL DATA
 *****************************************************************************/


 /****************************************************************************
 *  GLOBAL DATA
 *****************************************************************************/
uint32 g_onTime, g_offTime;
 /****************************************************************************
 *  FUNCTIONS
 *****************************************************************************/

 /******************************************************************************
 * Syntax          : LED_toggle
 * Description     : Toggle LED
 *
 * Sync\Async      : Synchronous
 * Reentrancy      : Nonreentrant
 * Parameters (in) : VOID
 * Parameters (out): NONE
 * Return value:   : VOID
 *******************************************************************************/
void LED_toggle(void)
{
	static uint64 cntr;
	cntr++;
	if (cntr < g_onTime* ONE_SECOND_16_BIT_TIMER_16MHZ)
	{
		DIO_writeChannel(PINB0, DIO_HIGH);
	}
	else if (cntr < (g_onTime + g_offTime)* ONE_SECOND_16_BIT_TIMER_16MHZ)
	{
		DIO_writeChannel(PINB0, DIO_LOW);
	}
	else if (cntr >= (g_onTime + g_offTime)* ONE_SECOND_16_BIT_TIMER_16MHZ)
	{
		cntr = 0;
	}
	else {
		/*Do Nothing*/
	}
}

 /******************************************************************************
 * Syntax          : LED_init
 * Description     : Initialize LED
 *
 * Sync\Async      : Synchronous
 * Reentrancy      : Nonreentrant
 * Parameters (in) : uint32 a_onTime, uint32 a_offTime .. in seconds
 * Parameters (out): NONE
 * Return value:   : VOID
 *******************************************************************************/
void LED_init(uint32 a_onTime, uint32 a_offTime)
{
	CLOCK_configType clockConfig = { PIOSC , DISABLE , SYSDIV_1 };
	CLOCK_init(&clockConfig);
	CLOCK_peripheralClkGating(RCGCTIMER);
	CLOCK_peripheralClkGating(RCGCGPIO);
	IntCtrl_init();
	DIO_initChannel(PINB0, DIO_OUTPUT);
	GPT_init(&gptConfig);
	GPT_Timer0_callBackPtr = LED_toggle;
	GPT_enableNotification(TIMER0_A);
	GPT_startTimer(TIMER0_A, 0);
	g_onTime = a_onTime;
	g_offTime = a_offTime;
}

/****************************************************************************
*  END OF FILE : clock.c
*****************************************************************************/