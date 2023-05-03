#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverse a string
 * @s: input string
 * Return string in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int count = 0;
	int v;

	while (s[count] != '\0')
	count++;
	for (v = 0; v < count; v++)
	{
		count--;
		rev = s[v];
		s[v] = s[count];
		s[count] = rev;
	}
}
