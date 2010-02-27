/**
 * @file	IEC60335_B_Interrupts.h
 * @purpose
 * @brief
 * @version 1.0
 * @date	10-sep-2009
 * @author	applhi
*/
/*----------------------------------------------------------------------------
 * Software that is described herein is for illustrative purposes only
 * which provides customers with programming information regarding the
 * products. This software is supplied "AS IS" without any warranties.
 * NXP Semiconductors assumes no responsibility or liability for the
 * use of the software, conveys no license or title under any patent,
 * copyright, or mask work right to the product. NXP Semiconductors
 * reserves the right to make changes in the software without
 * notification. NXP Semiconductors also make no representation or
 * warranty that such application will be suitable for the specified
 * use without further testing or modification.
 **********************************************************************/

#ifndef __cb_int_
#define __cb_int_

#include "IEC60335.h"

/*! \brief Structure for interrupt testing.

	For each interrupt, which has to be tested, there has to be one instance of this structure.
	To initialise the struct, you have to use the initialisation function
	\a IEC60335_InitInterruptTest(type_InterruptTest *pIRQ, UINT32 lowerBound, UINT32 upperBound, UINT32 individualValue).
*/
typedef struct tag_IntTest
{
	// general
	UINT32 Count;			/*!< The counter Variable*/

	UINT32 lower;			/*!< The estimated minimum count of interrupt occurencies*/
	UINT32 upper;			/*!< The estimated maximum count of interrupt occurencies*/
	
	UINT32 individualValue;	/*!< The individual up-counting value*/

	BOOL CountOverflow;

	BOOL cyclic;

	//injected Interrupt testing
	UINT32	minTime;			/*!< The time count that has to be waited, before the check is done */
} type_InterruptTest;

/*! \brief Initialises an interrupt test. */
void IEC60335_InitInterruptTest(type_InterruptTest *pIRQ, UINT32 lowerBound, UINT32 upperBound, UINT32 individualValue);

/*! \brief To be called inside the interrupt. */
void IEC60335_InterruptOcurred(type_InterruptTest *pIRQ);
/*! \brief Checks the interrupt. */
type_testResult IEC60335_InterruptCheck(type_InterruptTest *pIRQ);

#endif
