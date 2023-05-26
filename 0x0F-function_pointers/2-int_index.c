#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: function pointer (*cmp)
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int r;

	if (size <= 0)
		return (-1);

	for (r = 0; r < size; r++)
	{
		if (cmp(array[r]))
			return (r);
	}
	return (-1);
}
