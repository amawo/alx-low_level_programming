#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - a function that returns sum of all it's parameters
 * @n: a fix parametre
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: sum (success), otherwise If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int arg;
	int result = 0;
	unsigned int i;
	va_list variable_arguments;

	if (n == 0)
		return (0);


	va_start(variable_arguments, n);

	/* redo the variable arguments and add them to the result*/
	for (i = 0; i < n; i++)
	{
		arg = va_arg(variable_arguments, int);

		result += arg;
	}

	va_end(variable_arguments);
	return (result);
}
