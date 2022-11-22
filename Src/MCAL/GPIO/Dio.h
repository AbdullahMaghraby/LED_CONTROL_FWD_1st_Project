/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Dio.h
 *
 *  Description:  Dighital input output Module Header file
 *
 * 		 Author: Abdullah Mohammed Al-Maghraby
 *
 *********************************************************************************************************************/
#ifndef <DIO_H>
#define <DIO_H>

 /*********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "std_types.h"
#include "Dio_Types.h"


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
 * Syntax          : DIO_initChannel
 * Description     : Initialize Pin Direction
 *
 * Sync\Async      : Synchronous
 * Reentrancy      : Reentrant
 * Parameters (in) : DIO_channelType a_channelID, DIO_directionType a_direction)
 * Parameters (out): NONE
 * Return value:   : VOID
 *******************************************************************************/
void DIO_initChannel(DIO_channelType a_channelID, DIO_directionType a_direction);
 
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
DIO_levelType DIO_readChannel(DIO_channelType a_channelID);

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
void DIO_writeChannel(DIO_channelType a_channelID, DIO_levelType a_level);

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
DIO_portLevelType DIO_readPort(DIO_portType a_portID);

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
void DIO_writePort(DIO_portType a_portID, DIO_portLevelType a_level);

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
DIO_levelType DIO_flipChannel(DIO_channelType a_channelID);

#endif  /* DIO_H */
 /*********************************************************************************************************************
 *  END OF FILE: Dio.h
 *********************************************************************************************************************/