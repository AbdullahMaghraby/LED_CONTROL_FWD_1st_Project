/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  IntCtrl.h
 *
 *  Description:  Interrupt controllr Header file
 *
 * 		 Author: Abdullah Mohammed Al-Maghraby
 *
 *********************************************************************************************************************/
#ifndef <INT_CTRL_H>
#define <INT_CTRL_H>

 /*********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "IntCtrl_Cfg.h"
#include "IntCtrl_Types.h"
#include "mcu_hw.h"


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
 * Syntax          : IntCtrl_init
 * Description     : Initialize required Interrupt 
 *
 * Sync\Async      : Synchronous
 * Reentrancy      : Nonreentrant
 * Parameters (in) : VOID
 * Parameters (out): NONE
 * Return value:   : VOID
 *******************************************************************************/
void IntCtrl_init(void);

#endif  /* INT_CTRL_H */

 /*********************************************************************************************************************
 *  END OF FILE: IntCtrl.h
 *********************************************************************************************************************/