#include "main.h"
#include <stdio.h>


/**
 * leet - a function thaat encode into 1337speak
 * @n: the input value
 * Return: n value
 */

char *leet(char *n)
{
	int v, w;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (v = 0; n[v] != '\0'; v++)
	{
		for (w = 0; w < 10; w++)
		{
			if (n[v] == s1[w])
			{
				n[v] = s2[w];
			}
		}
	}
	return (n);
}
