#include "main.h"

/**
 * main - print alphabet in lower case
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
	return (0);
}