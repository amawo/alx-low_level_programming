#include "main.h"
#include <stdio.h>

/**
 * print_rev - print strings in reverse
 * followed by new line
 *
 * @s: string to reverse
 */


void print_rev(char *s)
{
	int v;
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	s--;
	for (v = lenght; v > 0; v--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
