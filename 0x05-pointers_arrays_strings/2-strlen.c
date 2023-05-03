#include "main.h"
#include <stdio.h>

/**
 * _strlen - A function that returns the length of a string.
 * @s: the input .
 *
 * Return: lenght
 */

int _strlen(char *s)
{
	int lengh = 0;

	while (*s != '\0')
	{
		lengh++;
		s++;
	}

	return (lengh);
}
