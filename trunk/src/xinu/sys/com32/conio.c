/* ----------------------------------------------------------------------- *
 *
 *   Copyright 2001-2008 H. Peter Anvin - All Rights Reserved
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, Inc., 53 Temple Place Ste 330,
 *   Boston MA 02111-1307, USA; either version 2 of the License, or
 *   (at your option) any later version; incorporated herein by reference.
 *
 * ----------------------------------------------------------------------- */

/*
 * conio_com32.c
 *
 * Output to the screen
 */

#include <com32.h>
#include <stdarg.h>

#define NULL ((void *)0)

static inline void memset_com32(void *buf, int ch, unsigned int len)
{
    asm volatile ("cld; rep; stosb":"+D" (buf), "+c"(len):"a"(ch):"memory");
}

int putchar_com32(int ch)
{
    com32sys_t regs;

    memset_com32(&regs, 0, sizeof regs);

    if (ch == '\n') {
	/* \n -> \r\n */
	putchar_com32('\r');
    }

    regs.eax.b[1] = 0x02;
    regs.edx.b[0] = ch;
    __com32.cs_intcall(0x21, &regs, NULL);

    return ch;
}

/* Note: doesn't put '\n' like the stdc version does */
int puts_com32(const char *s)
{
    int count = 0;

    while (*s) {
	putchar_com32(*s);
	count++;
	s++;
    }

    return count;
}
