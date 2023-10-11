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
	char *str = "_putchar";
	int i;
	char chr;

	do {
		chr = sentence[i];
		if (chr != '\0')
		{
			_putchar(chr);
			i++;
		}
	} while (chr != '\0')

	putchar('\n');

	return (0);
}

