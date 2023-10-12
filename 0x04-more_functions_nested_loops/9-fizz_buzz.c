#include "main.h"

/**
 * main - entry point
 *
 * Description: fizz buzz game
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((i % 15) == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%i", i);
		}
		if (i < 100)
		{
			putchar(' ');
		}
	}
	printf("\n");

	return (0);
}
