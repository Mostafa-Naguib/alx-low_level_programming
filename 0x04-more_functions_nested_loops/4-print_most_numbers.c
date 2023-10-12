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
	int i = 48;

	for (; i <= 57; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
