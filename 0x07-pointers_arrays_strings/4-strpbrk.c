#inlude "main.h"

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

char *_strpbrk(char *s, char *accept)
{
	char *match = strpbrk(s, accept);

	return (match);
}

