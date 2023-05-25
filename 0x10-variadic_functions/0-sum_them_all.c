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
	if (n == 0)
		return (0);

	int result = 0;

	va_list variable_arguments;

	va_start(variable_arguments, n);

	/* redo the variable arguments and add them to the result*/
	for (int i = 0; i < n; i++)
	{
		int arg = va_arg(variable_arguments, int);

		result += arg;
	}

	va_end(variable_arguments);
	return (result);
}
