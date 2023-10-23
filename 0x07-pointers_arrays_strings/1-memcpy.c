#inlude "main.h"

/**
 * _memcpy - A function that copies memory area.
 *
 * Description: a function that copies memory area.
 *
 * @dest: The place where we're going to move to it...
 * @src: The place that we will take from...
 * @n: The number of bytes...
 *
 * Return: (dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	memcpy(dest, src, sizeof(char) * n);

	return (dest);
}

