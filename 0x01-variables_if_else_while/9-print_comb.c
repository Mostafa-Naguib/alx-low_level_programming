#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		putchar(48 + i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
