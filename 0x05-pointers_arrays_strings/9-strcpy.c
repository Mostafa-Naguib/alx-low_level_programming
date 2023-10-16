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
 * Return: src
 */

char *_strcpy(char *dest, char *src)
{
	unsigned int i = 0;

	for (; i <= strlen(src); i++)
	{
		dest[i] = src[i];
	}

	return (src);
}
