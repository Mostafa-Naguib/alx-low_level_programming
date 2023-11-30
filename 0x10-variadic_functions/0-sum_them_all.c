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
	int sum = 0, c = n;
	va_list ptr;

	va_start(ptr, n);

	if (!n)
		return (0);

	while (c--)
		sum += va_arg(ptr, int);

	va_end(ptr);
	return (sum);
}
