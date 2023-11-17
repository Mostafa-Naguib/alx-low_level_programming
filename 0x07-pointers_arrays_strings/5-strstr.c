#include "main.h"

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

