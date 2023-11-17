#include "main.h"

/**
 * _strchr - A function that locates a character in a string.
 *
 * Description: A function that locates a character in a string.
 * @s: The string...
 * @c: The character that you want to search in the string...
 *
 * Return: Always (ptr) (Success)
 */


char *_strchr(char *s, char c)
{
	char *s_tmp = s;

	while (*s_tmp != '\0')
	{
		if (*s_tmp == c)
		{
			return (s_tmp);
		}
		s_tmp++;
	}
	return (0);
}

