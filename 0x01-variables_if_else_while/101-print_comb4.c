#include <stdio.h>


/**
 * main - program that prints all possible
 * different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 8; i++)
	{
		j = i + 1;
		k = i + 2;
		for (; k <= 9; k++)
		{
			putchar(i + 48);
			putchar(j + 48);
			putchar(k + 48);
			if (i < 7)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}

