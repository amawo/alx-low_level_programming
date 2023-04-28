#include "main.h"

/**
 * _isupper - indicate if it is uppercase
 * @c: input
 * return 0 or 1
 *
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
