#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse array of integers
 * @a: 1th array
 * @n: 2nd number of elements of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int u;
	int t;

	for (u = 0; u < n--; u++)
	{
		t = a[u];
		a[u] = a[n];
		a[n] = t;
	}
}
