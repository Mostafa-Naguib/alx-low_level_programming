#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  Write a program that prints the numbers
 * from 1 to 100, followed by a new line using fizz buzz.
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			putchar(' ');
		}
	}
	printf("\n");

	return (0);
}

