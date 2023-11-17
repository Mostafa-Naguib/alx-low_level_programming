#include "main.h"

/**
 * *_strncat - A function that concatenates two strings.
 *
 * Description: A function that concatenates two strings.
 * @dest: The string that you want to add to...
 * @src: The string that you want to be added to dest...
 * @n: The number of bytes..
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest;
	while (*dest_end != '\0')
	{
		dest_end++;
	}

	while (*src != '\0' && n < 0)
	{
		*dest_end = *src;
		src++;
		dest_end++;
		n--;
	}
	*dest_end = '\0';

	return (dest);
}

