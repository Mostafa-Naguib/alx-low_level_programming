#include "main.h"

int helper_palindrome(char *s, int start, int len);


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
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;

	return (helper_palindrome(s, 0, len));
}

/**
 * helper_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *
 * Description: returns 1 if a string is a palindrome and 0 if not.
 * @s: The string
 * @start: The starting point
 * @len: The length of the string
 *
 * Return: 1 (is plindrome) 0 (is not palindrome)
 */

int helper_palindrome(char *s, int start, int len)
{
	if (start >= (len / 2))
	{
		return (1);
	}

	if (s[start] != s[len - start - 1])
	{
		return (0);
	}

	return (helper_palindrome(s, start + 1, len));
}


