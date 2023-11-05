#include "main.h"

/**
 * _strlen - A function that returns the length of a string..
 *
 * Description: A function that returns the length of a string.
 * @s: the string that you want to count...
 *
 * Return: Always 0 (Success)
 */


int _strlen(char *s)
{
	int i = 0;
	char checker = '0';
	int num = 0;

	while (1)
	{
		checker = s[i];
		if (checker == '\0')
		{
			break;
		}
		i++;
		num++;
	}

	return (num);
}

