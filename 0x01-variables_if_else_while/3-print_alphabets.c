#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase.
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (int i = 0; i < 26; i++)
	{
		putchar(97 + i);
	}
	for (int j = 0; j < 26; j++)
	{
		putchar(65 + j);
	}
	putchar('\n');
	
	return (0);
}
