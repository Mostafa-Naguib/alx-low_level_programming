#include "main.h"

/**
 * main - entry point
 *
 * Description: fizz buzz game
 *
 */


void main(void)
{
	int i = 1;

	for (; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%i ", i);
		}

	}
}
