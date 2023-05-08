#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Write a function that prints the sum of the two
 * diagonals of a square matrix of integers- Entry point
 * @a: first input
 * @size: sec input
 *
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int summ1, summ2, y;

	summ1 = 0;
	summ2 = 0;

	for (y = 0; y < size; y++)
	{
		summ1 = summ1 + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		summ2 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", summ1, summ2);
}
