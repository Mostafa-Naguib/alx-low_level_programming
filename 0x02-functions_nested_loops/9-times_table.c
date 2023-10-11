#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Description: prints the 9 times table, starting with 0.
 *
 * Return: Always 0 (Success)
 */


void times_table(void)
{
	int i;
	int j;
	int n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;

			if (n >= 10)
			{
				int second = n % 10;
				int first = (n - second) / 10;

				_putchar(',');
				_putchar(' ');
				_putchar(first + 48);
				_putchar(second + 48);
			}
			else if (n <= 9)
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(n + 48);
			}

		}
		_putchar('\n');
	}
}

