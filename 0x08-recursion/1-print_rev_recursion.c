#include "main.h"


/**
 * _print_rev_recursion - function tha prints a string in reverse.t
 *
 * Description: function that prints a string in reverse. 
 * @s: The string
 *
 */

void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(&s[1]);

	_putchar(*s);

}
