#include "main.h"
int _strlen(const char *s);

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 *
 * @b: is pointing to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if;
 * There is one or more chars in the string b that is not 0 or 1
 * b is NULL.
 */


unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int value = 0;
	int exponent = 0;
	int n = _strlen(b) - 1;

	if (!b)
		return (0);

	for (i = n; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		value += (b[i] - '0') * (1 << exponent);
		exponent++;
	}

	return (value);
}


/**
 * _strlen - A function that returns the length of a string..
 *
 * Description: A function that returns the length of a string.
 * @s: the string that you want to count...
 *
 * Return: The length of the string
 */


int _strlen(const char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		;

	return (i);
}

