#include "main.h"
#include <stdio.h>

/**
 * factorial - a function that returns the factorial of a number
 * @n: number to return the factorial from
 * If n is lower than 0, the function should return -1 to indicate an error
 *
 * Return:  Factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
