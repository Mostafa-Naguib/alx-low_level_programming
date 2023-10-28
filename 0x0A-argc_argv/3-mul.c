#include <stdio.h>
#include <stdlib.h>


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
	if (argc > 1)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

}
