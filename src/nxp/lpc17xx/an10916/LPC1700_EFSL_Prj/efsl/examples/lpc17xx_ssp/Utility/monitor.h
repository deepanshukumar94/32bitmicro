#ifndef __MONITOR_H__
#define __MONITOR_H__


#include <stdint.h>
#include "lpc17xx_ssp/UART/lpc17xx_uart.h"

#define xgetc()		(char)LPC17xx_UART_GetChar()
#define uart0_put(x)	(char)LPC17xx_UART_PutChar(x)

int32_t xatoi (int8_t**, int32_t*);
void xputc (int8_t);
void xputs (const int8_t*);
void xitoa (int32_t, int32_t, int32_t);
void xprintf (const int8_t*, ...);
void put_dump (const uint8_t*, uint32_t ofs, int32_t cnt);
void get_line (int8_t*, int32_t len);
void get_line (int8_t*, int32_t len);


#endif /* __MONITOR_H__ */
