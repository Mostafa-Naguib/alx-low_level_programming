#include <stdio.h>
#include <stdlib.h>
int _atoi(char *s);

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
	if (argc == 3)
	{
		printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

}

/**
 * _atoi - Convert string to int
 *
 * Description: Convert a string to an integer.
 * @s: The string
 *
 * Return: The integer number
 */


int _atoi(char *s)
{
	double result = 0;
	int sign = 1;

	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;

	if (*s == '-' || *s == '+')
	{
		sign = (*s == '-') ? -1 : 1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}

	return ((result * sign));
}

