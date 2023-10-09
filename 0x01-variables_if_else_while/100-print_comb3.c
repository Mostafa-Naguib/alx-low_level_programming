#include <stdio.h>


/**
 * main - program that prints all possible
 * different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		j = i + 1;
		for (; j < 10; j++)
		{
			putchar(i + 48);
			putchar(j + 48);
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}

