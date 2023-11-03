#include "main.h"


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

	memset(ptr, 0, size * sizeof(int));

	return (ptr);
}
