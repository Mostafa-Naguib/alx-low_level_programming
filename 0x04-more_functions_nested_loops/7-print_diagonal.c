#include "main.h"


/**
 * print_diagonal - A function that draws a diagonal line on the terminal.
 *
 * Description: A function that draws a diagonal line on the terminal.
 * @n: Is the number of times the character \ should be printed
 *
 */


void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (; i < n; i++)
		{
			j = 1;
			for (; j <= i; j++)
			{
				_putchar(' ');
			}

			_putchar(92);
			_putchar('\n');
		}

	}

}
