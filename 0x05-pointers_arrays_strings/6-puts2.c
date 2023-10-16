#include "main.h"


/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * Description: a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: the srtring that you want to prints every other character.
 *
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	unsigned int i;

	for (i = 0; i < strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

