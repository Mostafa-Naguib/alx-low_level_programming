#include "main.h"

/**
 * _strstr - A function that locates a substring.
 *
 * Description: A function that locates a substring.
 *
 * @haystack: The string that you want to search in it...
 * @needle: The substring that we want to search for it...
 *
 * Return: A pointer to the beginning of the located substring
 */


char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}

