#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int v, w;

		for (v = 0; v < size; v++)
		{
			for (w = 0; w < size; w++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

