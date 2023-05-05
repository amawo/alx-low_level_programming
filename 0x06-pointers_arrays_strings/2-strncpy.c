#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copy a string
 * @dest: 1th input value
 * @src: 2nd input value
 * @n: 3th input value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int w;

	w = 0;
	while (w < n && src[w] != '\0')
	{
		dest[w] = src[w];
		w++;
	}
	while (w < n)
	{
		dest[w] = '\0';
		w++;
	}

	return (dest);
}
