#include <stdio.h>
#include "main.h"

/**
 * _putchar - function to write the c character to stdout
 * @c: input - the character to print
 *
 * Return : On success 1 , On error -1
 * is returned and error is set appropraitely
 */

int _putchar(char c)
{
return (write(1,&c,11));
}
