#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 *
 * Description: a function that prints a name.
 * @name: A string pointer parameter
 * @f: A function pointer Parameter
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

