#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 *
 * Description: a function that encodes a string into 1337.
 * @s: The string..
 *
 * Return: The string
 */

char *leet(char *s)
{
	char letters[] = "AEOTL";
	int numbers[5] = {4, 3, 0, 7, 1};
	int length = strlen(s);
	int i = 0;
	int j;

	for (; i < 5; i++)
	{
		for (j = 0; j < length; j++)
		{
			if (toupper(s[j]) == letters[i])
			{
				s[j] = numbers[i] + '0';
			}
		}
	}
	return (s);
}

