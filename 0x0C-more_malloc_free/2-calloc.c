#include "main.h"

char *_memset(char *s, char b, unsigned int n);

/**
 * _calloc - a function that allocates memory for an array, using malloc...
 *
 * Description: a function that allocates memory for an array, using malloc...
 * @size: How many bytes do you want to allocate in memory...
 * @nmemb: the size of it
 *
 * Return: A pointer to the allocated memory.
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (0);

	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (0);

	_memset(ptr, 0, size * nmemb);

	return (ptr);
}


/**
 * _memset - A function that fills memory with a constant byte.
 *
 * Description: a function that fills memory with a constant byte.
 * @s: array of type char
 * @b: constant byte
 * @n: the number of byte that you want to change
 *
 * Return: a pointer to the memory area s
 */


char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
	{
		*ptr++ = b;
	}

	return (s);
}



