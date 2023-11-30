#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 *
 * Description: a function that prints numbers, followed by a new line.
 * @n: is a fixed argument representing the number of variable arguments,
 * @separator: is a separator between two numbers
 *
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
