/**
 * @file	IEC60335_typedefs.h
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

#ifndef __CB_types_
#define __CB_types_

typedef signed char			INT8;
typedef unsigned char		UINT8;

typedef signed short		INT16;
typedef unsigned short		UINT16;

typedef signed int			INT32;
typedef unsigned int		UINT32;

typedef signed long long	INT64;
typedef unsigned long long	UINT64;

typedef	float				FLOAT32;
typedef	double				FLOAT64;

typedef unsigned char		BOOL;

//#define NULL				0
#define FALSE				0
#define TRUE				1

#define MIN(a,b)				((a<b)?a:b)
#define MAX(a,b)				((a>b)?a:b)
#define CUT(a,b,c)				(MAX(a,MIN(b,c)))
#define ifIsInRange(a,b,c)		((CUT(a,b,c) == b)?TRUE:FALSE)

#define isOdd_up(a,b)			((a & 0x01) ? (b=a):(b=a+4))
#define isEven_up(a,b)			((a & 0x01) ? (b=a+4):(b=a))
#define isOdd_down(a,b)			((a & 0x01) ? (b=a):(b=a-4))
#define isEven_down(a,b)		((a & 0x01) ? (b=a-4):(b=a))


#endif
