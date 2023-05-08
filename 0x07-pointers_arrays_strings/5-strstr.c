#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that locates a substring -Entry point
 * @haystack: 1th input
 * @needle: 2nd input
 * 
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *k = haystack;
		char *p = needle;

		while (*k == *p && *p != '\0')
		{
			k++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
