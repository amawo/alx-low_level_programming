#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: 1th input value
 * @src: 2nd input value
 * @n: 3th input value
 *
 * Return: dest
 */


char *_strncat(char *dest, char *src, int n)
{
	int v;
	int w;

	v = 0;
	while (dest[v] != '\0')
	{
		v++;
	}
	w = 0;
	while (w < n && src[w] != '\0')
	{
	dest[v] = src[w];
	v++;
	w++;
	}
	dest[v] = '\0';
	return (dest);
}
