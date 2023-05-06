#include "main.h"
#include <stdio.h>


/**
 * rev_string - function that reverse array
 * @n: integer params input
 *
 * Return: 0
 */

void rev_string(char *n)
{
	int v = 0;
	int w = 0;
	char temp;

	while (*(n + v) != '\0')
	{
		v++;
	}
	v--;

	for (w = 0; w < v; w++, v--)
	{
		temp = *(n + w);
		*(n + w) = *(n + v);
		*(n + v) = temp;
	}
}
