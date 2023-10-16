#include "main.h"

/**
 * print_rev - A function that prints a string, in reverse,
 * followed by a new line.
 *
 * Description: A function that prints a string, in reverse,
 * followed by a new line.
 * @s: Takes the string that you want to print reversibly...
 */


void print_rev(char *s)
{
	int i = strlen(s) - 1;

	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

