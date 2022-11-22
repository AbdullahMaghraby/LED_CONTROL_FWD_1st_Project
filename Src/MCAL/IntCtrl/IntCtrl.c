/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  IntCtrl.c
 *
 *  Description:  Interrupt Controller Source file
 *
 * 		 Author: Abdullah Mohammed Al-Maghraby
 *
 *********************************************************************************************************************/

 /****************************************************************************
 *  INCLUDES
 *****************************************************************************/
#include "IntCtrl.h"
#include "std_types.h"

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
void IntCtrl_init(void)
{
	/*I am using pre-defined configured structure in Lcfg file that extered at Cfg file*/

	/*indicate group and sub-group priorities*/
	/*check on subgroup priority*/
	if (NUM_OF_BITS_FOR_SUB_GROUP_PRIORITY == 3)
	{
		SCB_APINT = SCB_APIT_VECTOR_KEY | ((0x7) << (8U));
	}
	else if (NUM_OF_BITS_FOR_SUB_GROUP_PRIORITY == 2) {
		SCB_APINT = SCB_APIT_VECTOR_KEY | ((0x6) << (8U));
	}
	else if (NUM_OF_BITS_FOR_SUB_GROUP_PRIORITY == 1) {
		SCB_APINT = SCB_APIT_VECTOR_KEY | ((0x5) << (8U));
	}
	else if (NUM_OF_BITS_FOR_SUB_GROUP_PRIORITY == 0) {
		SCB_APINT = SCB_APIT_VECTOR_KEY | ((0x4) << (8U));/*Note 0x4: could be any number from 0:4*/
	}
	else {
		/*Do nothing*/
	}

	/*indicate interrupt priotity*/
	for (int i=0;i< NUM_OF_INTERRUPTS;i++)
	{
		switch ((uint8)((interruptsArray[i]->s_interrupt) / 4))
		{
		case 0:
			NVIC_PRI0 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI0 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 1:
			NVIC_PRI1 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI1 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 2:
			NVIC_PRI2 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI2 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 3:
			NVIC_PRI3 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI3 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 4:
			NVIC_PRI4 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI4 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 5:
			NVIC_PRI5 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI5 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 6:
			NVIC_PRI6 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI6 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 7:
			NVIC_PRI7 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI7 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 8:
			NVIC_PRI8 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI8 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 9:
			NVIC_PRI9 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI9 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 10:
			NVIC_PRI10 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI10 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 11:
			NVIC_PRI11 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI11 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 12:
			NVIC_PRI12 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI12 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 13:
			NVIC_PRI13 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI13 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 14:
			NVIC_PRI14 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI14 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 15:
			NVIC_PRI15 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI15 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 16:
			NVIC_PRI16 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI16 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 17:
			NVIC_PRI17 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI17 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 18:
			NVIC_PRI18 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI18 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 19:
			NVIC_PRI19 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI19 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 20:
			NVIC_PRI20 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI20 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 21:
			NVIC_PRI21 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI21 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 22:
			NVIC_PRI22 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI22 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 23:
			NVIC_PRI23 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI23 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 24:
			NVIC_PRI24 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI24 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 25:
			NVIC_PRI25 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI25 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 26:
			NVIC_PRI26 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI26 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 27:
			NVIC_PRI27 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI27 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 28:
			NVIC_PRI28 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI28 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 29:
			NVIC_PRI29 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI29 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 30:
			NVIC_PRI30 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI30 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 31:
			NVIC_PRI31 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI31 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 32:
			NVIC_PRI32 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI32 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 33:
			NVIC_PRI33 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI33 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		case 34:
			NVIC_PRI34 |= ((interruptsArray[i]->s_subGroupPriority) << ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			NVIC_PRI34 |= ((interruptsArray[i]->s_groupPriority) << (MAX_PRIORITY_BITS - NUM_OF_BITS_FOR_GROUP_PRIORITY) + ((interruptsArray[i]->s_interrupt) % 4) * 3 + (((interruptsArray[i]->s_interrupt) % 4) + 1) * 5);
			break;
		default:
			/*Do Nothing*/
			break;
		}
	}

	/*Enable interrupt*/
	for (int i = 0; i < NUM_OF_INTERRUPTS; i++)
	{
		if ((interruptsArray[i]->s_interrupt) < 32)
		{
			NVIC_EN0 |= (1 << (interruptsArray[i]->s_interrupt) % 32)
		}
		else if ((interruptsArray[i]->s_interrupt) < 64)
		{
			NVIC_EN1 |= (1 << (interruptsArray[i]->s_interrupt) % 32)
		}
		else if ((interruptsArray[i]->s_interrupt) < 96)
		{
			NVIC_EN2 |= (1 << (interruptsArray[i]->s_interrupt) % 32)
		}
		else if ((interruptsArray[i]->s_interrupt) < 127)
		{
			NVIC_EN3 |= (1 << (interruptsArray[i]->s_interrupt) % 32)
		}
		else if ((interruptsArray[i]->s_interrupt) <= 138)
		{
			NVIC_EN4 |= (1 << (interruptsArray[i]->s_interrupt) % 32)
		}
		else
		{
			/*Do Nothing*/
		}
	}
}


/****************************************************************************
*  END OF FILE : IntCtrl.c
*****************************************************************************/