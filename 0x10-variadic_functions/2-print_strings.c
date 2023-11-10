#include "variadic_functions.h"



void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);
	int i;
	char *s;

	if (!separator)
		separator = "";

	for (i = 0; i < n; i++)
	{
		s = va_args(args, sizeof(s))

	}
}
