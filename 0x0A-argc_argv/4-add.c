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
			if (isdigit(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);

		}
		printf("%d\n", sum);
	}


	return (0);
}
