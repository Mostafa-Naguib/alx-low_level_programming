#include "main.h"


/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * Description: a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: the destination that you want to store src in it.
 * @src: the string.
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

