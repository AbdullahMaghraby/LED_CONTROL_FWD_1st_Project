/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  std_types.h
 *
 *  Description:  Common Standard Types
 * 
 * 		 Author: Abdullah Mohammed Al-Maghraby
 *
 *********************************************************************************************************************/
#ifndef <STD_TYPES_H>
#define <STD_TYPES_H>

/*********************************************************************************************************************
* INCLUDES
*********************************************************************************************************************/


/*********************************************************************************************************************
*  GLOBAL CONSTANT MACROS
*********************************************************************************************************************/
/* boolean diffrent values */
#define FALSE			  (0u)
#define TRUE			  (1u)

#define LOGIC_HIGH        (1u)
#define LOGIC_LOW         (0u)

/*
#define DISABLE			  (0u)
#define ENABLE			  (1u)
*/

#define OFF			  (0u)
#define ON			  (1u)

#define NULL_PTR    ((void*)0)

/*********************************************************************************************************************
*  GLOBAL FUNCTION MACROS
*********************************************************************************************************************/


/*********************************************************************************************************************
*  GLOBAL DATA TYPES AND STRUCTURES
*********************************************************************************************************************/
typedef unsigned char boolean;

typedef unsigned char         uint8;          /*           0 .. 255              */
typedef signed char           sint8;          /*        -128 .. +127             */
typedef unsigned short        uint16;         /*           0 .. 65535            */
typedef signed short          sint16;         /*      -32768 .. +32767           */
typedef unsigned long         uint32;         /*           0 .. 4294967295       */
typedef signed long           sint32;         /* -2147483648 .. +2147483647      */
typedef unsigned long long    uint64;         /*       0 .. 18446744073709551615  */
typedef signed long long      sint64;         /* -9223372036854775808 .. 9223372036854775807 */
typedef float                 float32;		  /* -2147483648 .. +2147483647 :fractional values*/
typedef double                float64;        /* -9223372036854775808 .. 9223372036854775807 :fractinal values*/


/*********************************************************************************************************************
*  GLOBAL DATA PROTOTYPES
*********************************************************************************************************************/


/*********************************************************************************************************************
*  GLOBAL FUNCTION PROTOTYPES
*********************************************************************************************************************/


#endif  /* STD_TYPES_H */

/*********************************************************************************************************************
*  END OF FILE: std_Types.h
*********************************************************************************************************************/