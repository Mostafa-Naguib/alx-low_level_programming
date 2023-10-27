#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *
 * Description: returns 1 if a string is a palindrome and 0 if not.
 * @s: The string
 *
 * Return: 0 (is palindrome) 1 (is not palindrome)
 */

int is_palindrome(char *s)
{
	int len = strlen(s);
	int i;

	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
		{
			return (0);
		}
	}
	return (1);
}

