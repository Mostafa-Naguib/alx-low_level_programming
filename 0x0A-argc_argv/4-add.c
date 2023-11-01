#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * main - multiplies two numbers.
 *
 * Description: multiplies two numbers.
 * @argc: The number of argv
 * @argv: The array
 *
 * Return: Always 0 (Success)
 */



int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				return (printf("Error\n"), 1);
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}
