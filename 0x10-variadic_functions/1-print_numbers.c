#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 *
 * Description: a function that prints numbers, followed by a new line.
 * @n: is a fixed argument representing the number of variable arguments,
 * @separator: is a separator between two numbers
 *
 */

#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);


	if (!separator)
		separator = "\n";
	if (!n)
	{
		printf("\n");
		return;
	}


	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		if (i < n - 1)
			printf("%d%s", num, separator);
	}
	printf("\n");

	va_end(args);
}
