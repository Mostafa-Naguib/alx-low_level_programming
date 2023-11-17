#include "main.h"


/**
 * _strncpy - A function that copies a string.
 *
 * Description: A function that copies a string.
 *
 * @dest: The string that you want to add to...
 * @src: The string that you want to be added...
 * @n: The number of bytes...
 *
 * Return: (dest)
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];

		if (src[i] == '\0')
		{
			break;
		}
	}

	return (dest);
}


