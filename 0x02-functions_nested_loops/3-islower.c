#include "main.h"

/**
 * main - print function to check on lowercase letter
 *
 * Return: 1 if c is lowercase other wise 0
 *
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
