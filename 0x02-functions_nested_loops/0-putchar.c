#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar, followed by a new line.
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char *sentence = "_putchar";
	int i = 0;
	char chr;

	do {
		chr = sentence[i];
		if (chr != '\0')
		{
			_putchar(chr);
			i++;
		}
	} while (chr != '\0');

	_putchar('\n');

	return (0);
}

