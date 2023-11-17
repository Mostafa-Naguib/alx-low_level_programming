#include "main.h"


/**
 * _puts - A function that prints a string,
 * followed by a new line, to stdout.
 *
 * Description: a function that prints a string,
 * followed by a new line, to stdout.
 *
 * @str: takes the string that you want to type..
 *
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	int i = 0;
	char checker = '\0';

	while (1)
	{
		checker = str[i];
		if (checker == '\0')
		{
			break;
		}
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

