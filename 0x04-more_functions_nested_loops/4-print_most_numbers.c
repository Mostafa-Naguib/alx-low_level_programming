#include "main.h"


/**
 * print_numbers - a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 *
 * Description: A function that prints the numbers,
 * from 0 to 9, followed by a new line.
 *
 */



void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
