/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  clock.c
 *
 *  Description:  System Clock Source file
 *
 * 		 Author: Abdullah Mohammed Al-Maghraby
 *
 *********************************************************************************************************************/

/****************************************************************************
*  INCLUDES
*****************************************************************************/
#include "clock.h"
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


/******************************************************************************
* Syntax          : CLOCK_init
* Description     : Initialize System clock
*
* Sync\Async      : Synchronous
* Reentrancy      : Nonreentrant
* Parameters (in) : Clock_configType* clkConfig_Ptr
* Parameters (out): NONE
* Return value:   : VOID
*******************************************************************************/
void CLOCK_init(Clock_configType* clkConfig_Ptr)
{
	RCC_REG |= ((clkConfig_Ptr->s_clkDivisor) << 23);
	SET_BIT(RCC_REG, 22);/*Enable System Clock Dividor */
	RCC_REG |= ((clkConfig_Ptr->s_pll) << 11);
	if ((clkConfig_Ptr->s_pll) == ENABLE) {
		while ((RIS_REG & (1 << 6)) != 1) {}/*wait till PLLLRIS is set to ensure PLL is enabled*/
	}
	RCC_REG |= ((clkConfig_Ptr->s_clkSrc) << 11);
	if ((clkConfig_Ptr->s_clkSrc) != MOSC) {
		SET_BIT(RCC_REG, 0);/*Disable main Oscillator through MOSCDIS bit*/
	}
	else {
		CLEAR_BIT(RCC_REG, 0);/*Enable main Oscillator through MOSCDIS bit*/
	}
}

/******************************************************************************
* Syntax          : CLOCK_peripheralClkGating
* Description     : Enable Clock gating into a certain peripheral
*
* Sync\Async      : Synchronous
* Reentrancy      : Reentrant
* Parameters (in) : CLOCK_peripheralGatingType a_peripheral, uint8 a_channel
* Parameters (out): NONE
* Return value    : VOID
* TODO			  : Add clock gating to peripheral at sleeping mode
*******************************************************************************/
void CLOCK_peripheralClkGating(CLOCK_peripheralGatingType a_peripheral, uint8 a_channel)
{
	switch (a_peripheral) {
	case RCGCWD:
		SET_BIT(RCGCWD_REG, a_channel);
		break;
	case RCGCTIMER:
		SET_BIT(RCGCTIMER_REG, a_channel);
		break;
	case RCGCGPIO:
		SET_BIT(RCGCGPIO_REG, a_channel);
		break;
	case RCGCDMA:
		SET_BIT(RCGCDMA_REG, a_channel);
		break;
	case RCGCHIB:
		SET_BIT(RCGCHIB_REG, a_channel);
		break;
	case RCGCUART:
		SET_BIT(RCGCUART_REG, a_channel);
		break;
	case RCGCSSI:
		SET_BIT(RCGCSSI_REG, a_channel);
		break;
	case RCGCI2C:
		SET_BIT(RCGCI2C_REG, a_channel);
		break;
	case RCGCUSB:
		SET_BIT(RCGCUSB_REG, a_channel);
		break;
	case RCGCCAN:
		SET_BIT(RCGCCAN_REG, a_channel);
		break;
	case RCGCADC:
		SET_BIT(RCGCADC_REG, a_channel);
		break;
	case RCGCACMP:
		SET_BIT(RCGCACMP_REG, a_channel);
		break;
	case RCGCPWM:
		SET_BIT(RCGCPWM_REG, a_channel);
		break;
	case RCGCQEI:
		SET_BIT(RCGCQEI_REG, a_channel);
		break;
	case RCGCEEPROM:
		SET_BIT(RCGCEEPROM_REG, a_channel);
		break;
	case RCGCWTIMER:
		SET_BIT(RCGCWTIMER_REG, a_channel);
		break;
	default :
		/*Do Nothing*/
		break;
	}
}

/****************************************************************************
*  END OF FILE : clock.c
*****************************************************************************/