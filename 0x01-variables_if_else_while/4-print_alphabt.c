#include <stdio.h>


/**
 * main - prints the alphabet in lowercase
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (int i = 0; i < 26; i++)
	{
		if (i != 4 && i != 16)
		{
			putchar(97 + i);
		}
	}
	putchar('\n');

	return (0);
}
