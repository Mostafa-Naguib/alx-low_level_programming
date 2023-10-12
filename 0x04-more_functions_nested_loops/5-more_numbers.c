#include "main.h"


/**
 * more_numbers - A function that prints 10 times the numbers.
 *
 * Description: A function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 */


void more_numbers(void)
{

	int i = 0;
	int c = 0;
	int x;

	for (; c < 10; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			x = i;
			if (i >= 10)
			{
				int first = ((i - (i % 10)) / 10);

				_putchar(first + '0');
				x = (x % 10);
			}


			_putchar(x + '0');
		}
		_putchar('\n');
	}
}
