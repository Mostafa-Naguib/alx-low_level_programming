#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 *
 * Description: a function that returns the length of a string.
 * @s: The string
 *
 * Return: The length of the string..
 */


int _strlen_recursion(char *s)
{
	int sum = 1;

	if (*s == '\0')
		return (0);

	return (sum + _strlen_recursion(&s[1]));
}

