#include "main.h"
#include <stdio.h>


/**
 * rot13 - a function that encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int v;
	int w;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (v = 0; s[v] != '\0'; v++)
	{
		for (w = 0; w < 52; w++)
		{
			if (s[v] == data1[w])
			{
				s[v] = datarot[w];
				break;
			}
		}
	}
	return (s);
}
