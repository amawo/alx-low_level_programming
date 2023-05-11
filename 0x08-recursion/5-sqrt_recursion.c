#include "main.h"
#include <stdio.h>

int real_sqrt_recursion(int n, int k);

/**
 * _sqrt_recursion - a function that  returns
 * the natural square root of a number
 * @n: number to calculate the square root of
 * If n does not have a natural square root, the function should return -1
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - function that recurses to find the natural
 *			square root of a number
 * @n: input - number to calculate the sqaure root of
 * @k: input- iterator
 *
 * Return: the resulting square root
 */

int real_sqrt_recursion(int n, int k)
{
	if (k * k > n)
		return (-1);
	if (k * k == n)
		return (k);
	return (real_sqrt_recursion(n, k + 1));
}
