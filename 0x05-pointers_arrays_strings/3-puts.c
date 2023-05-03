#include "main.h"


/**
 * _puts - Afunction that prints a string,
 * then followed by a new line, to stdout
 * @str: string to print
 *
 * return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
