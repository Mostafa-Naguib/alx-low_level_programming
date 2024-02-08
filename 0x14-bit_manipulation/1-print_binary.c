#include "main.h"


/**
 * print_binary - Prints the binary representation of a number.
 *
 * @n: The number in base-10
 *
 */


void print_binary(unsigned long int n)
{
	unsigned long int mask = 1 << (sizeof(n) * 8 - 1);
	unsigned long int i;
	int start = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 0; i < sizeof(n) * 8; i++)
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
			start = 1;
		}
		else if (start)
		{
			_putchar('0');
		}

		mask >>= 1UL;
	}

}
