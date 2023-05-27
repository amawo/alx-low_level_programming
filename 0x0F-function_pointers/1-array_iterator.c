#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that prints each array elem on a newline
 * @array: array
 * @size: size of the array[]
 * @action: function pointer (*action:prnt on array)
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int r;

	if (array == NULL || action == NULL)
		return;

	for (r = 0; r < size; r++)
	{
		action(array[r]);
	}
}
