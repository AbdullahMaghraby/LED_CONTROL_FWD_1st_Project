/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  common_macros.h
 *
 *  Description:  Common Macros usaually used for Bit Manipulation
 * 
 * 		 Author: Abdullah Mohammed Al-Maghraby
 *
 *********************************************************************************************************************/
#ifndef <COMMON_MACROS_H>
#define <COMMON_MACROS_H>

 /*********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "mcu_hw.h"

 /*********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/*********************************************************************************************************************
*  GLOBAL FUNCTION MACROS
*********************************************************************************************************************/
/* Set a certain bit in a certain register */
#define SET_BIT(REG,BIT) (REG|=(1<<BIT))

/* Clear a certain bit in a certain register */
#define CLEAR_BIT(REG,BIT) (REG&=(~(1<<BIT)))

/* Toggle a certain bit in a certain register */
#define TOGGLE_BIT(REG,BIT) (REG^=(1<<BIT))

/* Check if a specific bit is set in a certain register and return 1 if yes */
#define BIT_IS_SET(REG,BIT) ( REG & (1<<BIT) )

/* Check if a specific bit is cleared in a certain register and return 1 if yes */
#define BIT_IS_CLEAR(REG,BIT) ( !(REG & (1<<BIT)) )

/*Alised Register*/
#define ALISED_REG(REG,BIT) (*((volatile uint32 *)((&REG-PERIPHERAL_BIT_BAND_BASE)*32+BIT*4+PERIPHERAL_ALIAS_BASE)))


/*********************************************************************************************************************
*  GLOBAL DATA TYPES AND STRUCTURES
*********************************************************************************************************************/



/*********************************************************************************************************************
*  GLOBAL DATA PROTOTYPES
*********************************************************************************************************************/


/*********************************************************************************************************************
*  GLOBAL FUNCTION PROTOTYPES
*********************************************************************************************************************/


#endif  /* COMMON_MACROS_H */

/*********************************************************************************************************************
*  END OF FILE: common_macros.h
*********************************************************************************************************************/