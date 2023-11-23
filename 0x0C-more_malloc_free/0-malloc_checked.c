#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 *
 * Description: a function that allocates memory using malloc.
 * @b: The number of byte that you want to allocate.
 * Return: a pointer to the allocated memory
 */


void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == 0)
		exit(98);

	return (ptr);

}


