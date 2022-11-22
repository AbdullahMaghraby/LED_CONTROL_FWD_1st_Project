/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Dio.c
 *
 *  Description:  Dighital input output Module Source file
 *
 * 		 Author: Abdullah Mohammed Al-Maghraby
 *
 *********************************************************************************************************************/

 /****************************************************************************
 *  INCLUDES
 *****************************************************************************/
#include "Dio.h"
#include "mcu_hw.h"
#include "common_macros.h"

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
  * Syntax          : DIO_initChannel
  * Description     : Initialize Pin Direction
  *
  * Sync\Async      : Synchronous
  * Reentrancy      : Reentrant
  * Parameters (in) : DIO_channelType a_channelID, DIO_directionType a_direction)
  * Parameters (out): NONE
  * Return value:   : VOID
  *******************************************************************************/
void DIO_initChannel(DIO_channelType a_channelID, DIO_directionType a_direction)
{
	if (a_channelID < 8)
	{
		/*PortA*/
		ALISED_REG(PORTA_DIR_REG, a_channelID%8) = a_direction;
	}
	else if (a_channelID < 16)
	{
		/*PortB*/
		ALISED_REG(PORTB_DIR_REG, a_channelID%8) = a_direction;
	}
	else if (a_channelID < 24)
	{
		/*PortC*/
		ALISED_REG(PORTC_DIR_REG, a_channelID%8) = a_direction;
	}
	else if (a_channelID < 32)
	{
		/*PortD*/
		ALISED_REG(PORTD_DIR_REG, a_channelID%8) = a_direction;
	}
	else if (a_channelID < 40)
	{
		/*PortE*/
		ALISED_REG(PORTE_DIR_REG, a_channelID%8) = a_direction;
	}
	else if (a_channelID <= 44)
	{
		/*PortF*/
		ALISED_REG(PORTF_DIR_REG, a_channelID%8) = a_direction;
	}
	else
	{
		/*Do Nothing*/
	}
}

/******************************************************************************
* Syntax          : DIO_readChannel
* Description     : Read a Certain Pin
*
* Sync\Async      : Synchronous
* Reentrancy      : Reentrant
* Parameters (in) : DIO_channelType a_channelID
* Parameters (out): NONE
* Return value:   : DIO_levelType
*******************************************************************************/
DIO_levelType DIO_readChannel(DIO_channelType a_channelID)
{
	if (a_channelID < 8)
	{
		/*PortA*/
		return ALISED_REG(PORTA_DATA_REG, a_channelID % 8);
	}
	else if (a_channelID < 16)
	{
		/*PortB*/
		return ALISED_REG(PORTB_DATA_REG, a_channelID % 8);
	}
	else if (a_channelID < 24)
	{
		/*PortC*/
		return ALISED_REG(PORTC_DATA_REG, a_channelID % 8);
	}
	else if (a_channelID < 32)
	{
		/*PortD*/
		return ALISED_REG(PORTD_DATA_REG, a_channelID % 8);
	}
	else if (a_channelID < 40)
	{
		/*PortE*/
		return ALISED_REG(PORTE_DATA_REG, a_channelID % 8);
	}
	else if (a_channelID <= 44)
	{
		/*PortF*/
		return ALISED_REG(PORTF_DATA_REG, a_channelID % 8);
	}
	else
	{
		/*Do Nothing*/
	}
}

/******************************************************************************
* Syntax          : DIO_writeChannel
* Description     : Write a Certain Pin
*
* Sync\Async      : Synchronous
* Reentrancy      : Reentrant
* Parameters (in) : DIO_channelType a_channelID, DIO_levelType a_level
* Parameters (out): NONE
* Return value:   : VOID
*******************************************************************************/
void DIO_writeChannel(DIO_channelType a_channelID, DIO_levelType a_level)
{
	if (a_channelID < 8)
	{
		/*PortA*/
		ALISED_REG(PORTA_DATA_REG, a_channelID % 8) = a_level;
	}
	else if (a_channelID < 16)
	{
		/*PortB*/
		ALISED_REG(PORTB_DATA_REG, a_channelID % 8) = a_level;
	}
	else if (a_channelID < 24)
	{
		/*PortC*/
		ALISED_REG(PORTC_DATA_REG, a_channelID % 8) = a_level;
	}
	else if (a_channelID < 32)
	{
		/*PortD*/
		ALISED_REG(PORTD_DATA_REG, a_channelID % 8) = a_level;
	}
	else if (a_channelID < 40)
	{
		/*PortE*/
		ALISED_REG(PORTE_DATA_REG, a_channelID % 8) = a_level;
	}
	else if (a_channelID <= 44)
	{
		/*PortF*/
		ALISED_REG(PORTF_DATA_REG, a_channelID % 8) = a_level;
	}
	else
	{
		/*Do Nothing*/
	}
}

/******************************************************************************
* Syntax          : DIO_readPort
* Description     : Read a Certain Port
*
* Sync\Async      : Synchronous
* Reentrancy      : Reentrant
* Parameters (in) : DIO_portType a_portID
* Parameters (out): NONE
* Return value:   : DIO_portLevelType
*******************************************************************************/
DIO_portLevelType DIO_readPort(DIO_portType a_portID)
{
	switch (a_portID)
	{
	case PORTA:
		return PORTA_DATA_REG;
		break;
	case PORTB:
		return PORTB_DATA_REG;
		break;
	case PORTC:
		return PORTC_DATA_REG;
		break;
	case PORTD:
		return PORTD_DATA_REG;
		break;
	case PORTE:
		return PORTE_DATA_REG;
		break;
	case PORTF:
		return PORTF_DATA_REG;
		break;
	default:
		/*Do Nothing*/
		break;
	}
}

/******************************************************************************
* Syntax          : DIO_writePort
* Description     : Write a Certain Port
*
* Sync\Async      : Synchronous
* Reentrancy      : Reentrant
* Parameters (in) : DIO_portType a_portID, DIO_portLevelType a_level
* Parameters (out): NONE
* Return value:   : VOID
*******************************************************************************/
void DIO_writePort(DIO_portType a_portID, DIO_portLevelType a_level)
{
	switch (a_portID)
	{
	case PORTA:
		PORTA_DATA_REG=a_level;
		break;
	case PORTB:
		PORTB_DATA_REG = a_level;
		break;
	case PORTC:
		PORTC_DATA_REG = a_level;
		break;
	case PORTD:
		PORTD_DATA_REG = a_level;
		break;
	case PORTE:
		PORTE_DATA_REG = a_level;
		break;
	case PORTF:
		PORTF_DATA_REG = a_level;
		break;
	default:
		/*Do Nothing*/
		break;
	}
}

/******************************************************************************
* Syntax          : DIO_flipChannel
* Description     : Toggle a Certain Pin
*
* Sync\Async      : Synchronous
* Reentrancy      : Reentrant
* Parameters (in) : DIO_channelType a_channelID
* Parameters (out): NONE
* Return value:   : DIO_levelType
*******************************************************************************/
DIO_levelType DIO_flipChannel(DIO_channelType a_channelID)
{
	if (a_channelID < 8)
	{
		/*PortA*/
		ALISED_REG(PORTA_DATA_REG, a_channelID % 8) =(1^ ALISED_REG(PORTA_DATA_REG, a_channelID % 8)) ;
		return PORTA_DATA_REG;
	}
	else if (a_channelID < 16)
	{
		/*PortB*/
		ALISED_REG(PORTB_DATA_REG, a_channelID % 8) = (1 ^ ALISED_REG(PORTA_DATB_REG, a_channelID % 8));
		return PORTB_DATA_REG;
	}
	else if (a_channelID < 24)
	{
		/*PortC*/
		ALISED_REG(PORTC_DATA_REG, a_channelID % 8) = (1 ^ ALISED_REG(PORTC_DATA_REG, a_channelID % 8));
		return PORTC_DATA_REG;
	}
	else if (a_channelID < 32)
	{
		/*PortD*/
		ALISED_REG(PORTD_DATA_REG, a_channelID % 8) = (1 ^ ALISED_REG(PORTD_DATA_REG, a_channelID % 8));
		return PORTD_DATA_REG;
	}
	else if (a_channelID < 40)
	{
		/*PortE*/
		ALISED_REG(PORTE_DATA_REG, a_channelID % 8) = (1 ^ ALISED_REG(PORTE_DATA_REG, a_channelID % 8));
		return PORTE_DATA_REG;
	}
	else if (a_channelID <= 44)
	{
		/*PortF*/
		ALISED_REG(PORTF_DATA_REG, a_channelID % 8) = (1 ^ ALISED_REG(PORTF_DATA_REG, a_channelID % 8));
		return PORTF_DATA_REG;
	}
	else
	{
		/*Do Nothing*/
	}
}

/****************************************************************************
*  END OF FILE : Dio.c
*****************************************************************************/