/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Gpt_Types.h
 *
 *  Description:  General Purpose Timer Types file
 *
 * 		 Author: Abdullah Mohammed Al-Maghraby
 *
 *********************************************************************************************************************/
#ifndef <GPT_TYPES_H>
#define <GPT_TYPES_H>

 /*********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "std_types.h"
#include "Gpt_Types.h"
#include "Gpt_Cfg.h"

 /*********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


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
void GPT_init(const GPT_configType* config_Ptr);

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
void GPT_disableNotification(GPT_channelType a_channelID);

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
void GPT_enableNotification(GPT_channelType a_channelID);

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
void GPT_startTimer(GPT_channelType a_channelID, GPT_valueType a_value);

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
void GPT_stopTimer(GPT_channelType a_channelID);

#if 0
/******************************************************************************
* Syntax          : GPT_notificatioTimer0
* Description     : callback function 
*
* Sync\Async      : Synchronous
* Reentrancy      : Reentrant
* Parameters (in) : VOID
* Parameters (out): NONE
* Return value:   : VOID
*******************************************************************************/
void GPT_notificatioTimer0(void);
#endif

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
GPT_valueType GPT_getTimeElapsed(GPT_channelType a_channelID);

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
GPT_valueType GPT_getTimeRemaining(GPT_channelType a_channelID);


#endif  /* GPT_TYPES_H */

 /*********************************************************************************************************************
 *  END OF FILE: Gpt_Types.h
 *********************************************************************************************************************/