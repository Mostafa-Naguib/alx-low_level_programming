#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring.
 *
 * Description: a function that gets the length of a prefix substring.
 * @s: The string that you want to search in...
 * @accept: The pattern that you want to search for...
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{

	int length_1 = strlen(s);
	int length_2 = strlen(accept);
	int i, j;
	unsigned int n = 0;

	for (i = 0; i < length_1; i++)
	{
		for (j = 0; j < length_2; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
			}
		}
		if (s[i] == ' ')
		{
			break;
		}

	}

	return (n);

}

