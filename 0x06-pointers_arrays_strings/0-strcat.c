#include "main.h"


/**
 * _strcat - a function that concatenates two strings
 * @dest: input first value
 * @src: input second value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int v;
	int w;

	v = 0;
	while (dest[v] != '\0')
	{
		v++;
	}
	w = 0;
	while (src[w] != '\0')
	{
		dest[v] = src[w];
		v++;
		w++;
	}

	dest[v] = '\0';
	return (dest);
}
