/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Gpt.c
 *
 *  Description:  General Purpose Timer Source file
 *
 * 		 Author: Abdullah Mohammed Al-Maghraby
 *
 *********************************************************************************************************************/

 /****************************************************************************
 *  INCLUDES
 *****************************************************************************/
#include "Gpt.h"
#include "mcu_hw.h"

 /***************************************************************************
 *  LOCAL MACROS CONSTANT\FUNCTION
 *****************************************************************************/

 /****************************************************************************
 *  LOCAL DATA
 *****************************************************************************/


 /****************************************************************************
 *  GLOBAL DATA
 *****************************************************************************/

 /****************************************************************************
 *  FUNCTIONS
 *****************************************************************************/

/*ISR*/
void TIMER0A_Handler(void)
{
	if (GPT_Timer0_callBackPtr != NULL_PTR)
	{
		GPT_Timer0_callBackPtr();
	}
}


 /******************************************************************************
 * Syntax          : GPT_init
 * Description     : Initialize Gener purpose Timer
 *
 * Sync\Async      : Synchronous
 * Reentrancy      : Reentrant
 * Parameters (in) : const GPT_configType* config_Ptr
 * Parameters (out): NONE
 * Return value:   : VOID
 *******************************************************************************/
void GPT_init(const GPT_configType* config_Ptr)
{
	if (config_Ptr->s_channelID == TIMER0_A)
	{
		if (predefTimer == )
		{
			GPTMCFG_REG = 0x4;
		}
		if (config_Ptr->s_channelMode == GPT_CH_CONTINUOUS)
		{
			GPTMT0AMR_REG = 0x2;

		}
		else {

			GPTMT0AMR_REG = 0x1;/*one shoot*/
		}
		GPTMT0AMR_REG |= (1 << 4);/*count up*/
		
		GPTMIMR_REG |= 0;/*disable overflow interrupt*/
	}
	else {/*TODO*/ }

}

/******************************************************************************
* Syntax          : GPT_disableNotification
* Description     : disable noification for Gener purpose Timer
*
* Sync\Async      : Synchronous
* Reentrancy      : Reentrant
* Parameters (in) : GPT_channelType a_channelID
* Parameters (out): NONE
* Return value:   : VOID
*******************************************************************************/
void GPT_disableNotification(GPT_channelType a_channelID)
{
	if (a_channelID == TIMER0_A) {
		GPTMIMR_REG |= 0;/*disable overflow interrupt*/
	}
	else
	{
		/*TODO*/
	}
}

/******************************************************************************
* Syntax          : GPT_enableNotification
* Description     : Enable noification for Gener purpose Timer
*
* Sync\Async      : Synchronous
* Reentrancy      : Reentrant
* Parameters (in) : GPT_channelType a_channelID
* Parameters (out): NONE
* Return value:   : VOID
*******************************************************************************/
void GPT_enableNotification(GPT_channelType a_channelID)
{
	if (a_channelID == TIMER0_A) {
		GPTMIMR_REG |= 1;/*enable overflow interrupt*/
	}
	else
	{
		/*TODO*/
	}
}

/******************************************************************************
* Syntax          : GPT_startTimer
* Description     : start counting for Gener purpose Timer
*
* Sync\Async      : Synchronous
* Reentrancy      : Reentrant
* Parameters (in) : GPT_channelType a_channelID, GPT_valueType a_value
* Parameters (out): NONE
* Return value:   : VOID
*******************************************************************************/
void GPT_startTimer(GPT_channelType a_channelID, GPT_valueType a_value)
{
	if (a_channelID == TIMER0_A) {
		GPTMCTL_REG = 1;/*start counting*/
		GPTMTAV_REG = a_value;
	}
	else
	{
		/*TODO*/
	}
}

/******************************************************************************
* Syntax          : GPT_stopTimer
* Description     : stop counting for Gener purpose Timer
*
* Sync\Async      : Synchronous
* Reentrancy      : Reentrant
* Parameters (in) : GPT_channelType a_channelID
* Parameters (out): NONE
* Return value:   : VOID
*******************************************************************************/
void GPT_stopTimer(GPT_channelType a_channelID)
{
	if (a_channelID == TIMER0_A) {
		GPTMCTL_REG = 0;/*stop counting*/
	}
	else
	{
		/*TODO*/
	}
}


/******************************************************************************
* Syntax          : GPT_getTimeElapsed
* Description     : Get Elapsed for Gener purpose Timer
*
* Sync\Async      : Synchronous
* Reentrancy      : Reentrant
* Parameters (in) : GPT_channelType a_channelID
* Parameters (out): NONE
* Return value:   : GPT_valueType
*******************************************************************************/
GPT_valueType GPT_getTimeElapsed(GPT_channelType a_channelID)
{
	if (a_channelID == TIMER0_A) {
		return GPTMTAV_REG ;
	}
	else
	{
		/*TODO*/
	}
}

/******************************************************************************
* Syntax          : GPT_getTimeRemaining
* Description     : Get Remaining for Gener purpose Timer
*
* Sync\Async      : Synchronous
* Reentrancy      : Reentrant
* Parameters (in) : GPT_channelType a_channelID
* Parameters (out): NONE
* Return value:   : GPT_valueType
*******************************************************************************/
GPT_valueType GPT_getTimeRemaining(GPT_channelType a_channelID)
{
	if (a_channelID == TIMER0_A) {
		return (65535-GPTMTAV_REG);
	}
	else
	{
		/*TODO*/
	}
}

/****************************************************************************
*  END OF FILE : Gpt.c
*****************************************************************************/