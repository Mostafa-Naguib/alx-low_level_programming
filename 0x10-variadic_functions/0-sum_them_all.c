#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters
 *
 * Description: a function that returns the sum of all its parameters
 * @n: is a fixed argument representing the number of variable arguments,
 *
 * Return: 0 (Success) The sum of the arguments
 */


int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	if (!n)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
