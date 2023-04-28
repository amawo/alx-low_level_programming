#include "main.h"

/**
 * _isupper - indicate if it is uppercase
 * @c: input
 * Return: 1 if c is uppercase, 0 otherwise
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
