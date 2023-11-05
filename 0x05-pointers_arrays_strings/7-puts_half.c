#include "main.h"


/**
 * puts_half - A function that prints half of a string,
 * followed by a new line.
 *
 * Description: A function that prints half of a string,
 * followed by a new line.
 * @str: the string that you want to prints half of it.
 *
 */

void puts_half(char *str)
{
	int length;
	int i;

	for (length = 0; str[length] != '\0'; length++)
		;

	if (length % 2 == 1)
	{
		i = (length / 2) + 1;
	}
	else
	{
		i = (length / 2);
	}


	for (; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

