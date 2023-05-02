#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - Write a function that takes a pointer as parametre to an int,
 * then updates the value it points to for 98
 * @n: the integer to input
 * Return: 0 Always
 */

void reset_to_98(int *n)
{
	*n = 98;
	return (0);
}
