#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes.
 *
 * Description: A function that searches a string for any of a set of bytes.
 *
 * @s: The string that you want to search in it...
 * @accept: The pattern that you want to search for it...
 *
 * Return: substring fo corresponding pattern.
 */

char *_strpbrk(char *s, char *accept)
{
	int len_1 = strlen(s);
	int len_2 = strlen(accept);
	int i, j;

	for (i = 0; i < len_1; i++)
	{
		for (j = 0; j < len_2; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	return (NULL);
}

