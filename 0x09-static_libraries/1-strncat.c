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
	strncat(dest, src, n);

	return (dest);
}
