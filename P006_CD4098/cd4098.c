/*--------------------------------------------------------------------------------------------------------------------------------------------------------
 * Project: 		CD4098 Library
 * Hardware:		Arduino UNO
 * Micro:			ATMEGA328P
 * IDE:			Atmel Studio 6.2
 *
 * Name:			cd4098.c
 * Purpose: 		CMOS CD4098 Library functions
 * Date:			18-10-2015
 * Author:		Marcel van der Ven
 *
 * Hardware setup:	
 *
 * Note(s):
 *--------------------------------------------------------------------------------------------------------------------------------------------------------*/

/************************************************************************/
/* Defines				                                                                  */
/************************************************************************/
#define F_CPU	16000000UL

/************************************************************************/
/* Includes				                                                                  */
/************************************************************************/
#include "cd4098.h"
#include "common.h"
#include "util/delay.h"


/************************************************************************/
/* Structures				                                                                  */
/************************************************************************/
struct CD4098
{

	
	/* Specifies if the structure is initialized with the register addresses and pin numbers */
	BOOL isInitialized;
} cd4098;

/************************************************************************/
/* Functions				                                                                  */
/************************************************************************/
