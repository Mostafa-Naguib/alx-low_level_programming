#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 *
 * Description: creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array
 * @c: the type of the memory
 *
 * Return: a pointer to the array, or NULL if it fails
 */


char *create_array(unsigned int size, char c)
{
	char *space = malloc(size * sizeof(c));

	if (size == 0 || space == 0)
		return (0);

	while (size--)
	{
		space[size] = c;
	}

	return (space);
}

