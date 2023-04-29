#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int v, w;

		for (v = 1; v <= size; v++)
		{
			for (w = v; w < size; w++)
			{
				_putchar(' ');
			}

			for (w = 1; w <= v; w++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

