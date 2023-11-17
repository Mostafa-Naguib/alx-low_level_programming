#include "main.h"
int _strlen(char *s);

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
	int len_1 = _strlen(s);
	int len_2 = _strlen(accept);
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

	return (0);
}

/**
 * _strlen - A function that returns the length of a string..
 *
 * Description: A function that returns the length of a string.
 * @s: the string that you want to count...
 *
 * Return: The length of the string
 */


int _strlen(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		;

	return (i);
}


