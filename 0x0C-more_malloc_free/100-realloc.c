#include "main.h"


/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * Description: reallocates a memory block using malloc and free
 * @ptr: is a pointer to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 *
 * Return: The new array of (new_size)
 */



void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
		return (free(ptr), NULL);

	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == 0)
			return (0);
		return (nptr);
	}

	if (new_size > old_size)
	{
		nptr = malloc(new_size);
		if (nptr == 0)
			return (0);
		for (i = 0; i < new_size && i < old_size; i++)
			*((int *) nptr + i) = *((int *) ptr + i);
	}

	return (nptr);
}
