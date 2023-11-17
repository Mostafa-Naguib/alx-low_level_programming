#include "main.h"

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
