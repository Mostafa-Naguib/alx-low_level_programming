#include <stdio.h>
#include <stdlib.h>


/**
 * main - program that prints all arguments it receives.
 *
 * Description: program that prints all arguments it receives.
 * @argc: The number of argv
 * @argv: The array
 *
 * Return: Always 0 (Success)
 */


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc - 1; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
