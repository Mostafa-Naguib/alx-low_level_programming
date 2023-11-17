#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it.
 *
 * Description: prints the number of arguments passed into it.
 * @argc: The number of argv
 * @argv: The array
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv = argv;
	return (0);
}

