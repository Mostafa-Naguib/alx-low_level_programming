#include "main.h"

/**
 * _strcmp - A function that compares two strings.
 *
 * Description: A function that compares two strings.
 * @s1: The first string...
 * @s2: The second string...
 *
 * Return: 0 (matching)
 */

int _strcmp(char *s1, char *s2)
{
	int n;
	int i = 0;

	for (n = 0; s1[n] != '\0'; n++)
		;

	for (; i <= n; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}

	return (0);
}

