#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase.
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	for (int i = 0; i < 10; i++)
	{
		putchar(48 + i);
	}
	for (int j = 0; j < 5; j++)
	{
		putchar(97 + j);
	}
	putchar('\n');

	return (0);
}
