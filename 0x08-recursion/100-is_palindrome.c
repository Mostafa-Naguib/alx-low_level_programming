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
	int i = _strlen(s);

	return (helper_palindrome(s, 0, i));
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

/**
 * _strlen - A function that returns the length of a string..
 *
 * Description: A function that returns the length of a string.
 * @s: the string that you want to count...
 *
 * Return: The length of the string
 */


int _strlen(char *s, int i = 0)
{

	if (s[i] == NULL)
		return (i);


	return _strlen(s, i + 1);
}


