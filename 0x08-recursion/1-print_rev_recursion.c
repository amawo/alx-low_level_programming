#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Print a string in reverse , folowed by a new line
 * @s: input -The string to be printed.
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
