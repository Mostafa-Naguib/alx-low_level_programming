#include "main.h"


/**
 * print_times_table - prints the n times table, starting with 0.
 *
 * Description: prints the n times table, starting with 0.
 * @n: the number
 *
 */



void print_times_table(int n)
{
	int i;
	int j;

	if (n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int result = j * i;

				if (j != 0)
				{
					if (result < 10)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					else if (result >= 10 && result < 100)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
					else if (result >= 100)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				printf("%i", result);
			}
			_putchar('\n');
		}
	}
}
