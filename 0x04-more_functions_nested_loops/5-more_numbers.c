#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 * followed by new line
 * Return: void
 */

void more_numbers(void)
{
	int v, w;

	for (v = 1; v <= 10; v++)
	{
		for (w = 0; w <= 14; w++)
		{
			if (w >= 10)
				_putchar('1');
			_putchar (w % 10 + '0');
		}
		_putchar('\n');
	}
}
