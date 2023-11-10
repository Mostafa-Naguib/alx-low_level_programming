#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 *
 * Description: a function that prints strings, followed by a new line.
 * @separator: A separator between two string...
 * @n: is a fixed argument representing the number of variable arguments
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);

	if (!separator)
		separator = "";

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);

		(s) ? printf("%s", s) : printf("(nil)");

		if (i < (n - 1))
			printf("%s", separator);

	}
	printf("\n");
	va_end(args);
}
