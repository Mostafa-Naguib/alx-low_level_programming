#inlude "main.h"

/**
 * _strstr - A function that locates a substring.
 *
 * Description: A function that locates a substring.
 *
 * @haystack: The string that you want to search in it...
 * @needle: The substring that we want to search for it...
 *
 * Return: Always 0 (Success)
 */


char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}

