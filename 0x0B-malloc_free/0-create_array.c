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
 * Return: The space
 */


char *create_array(unsigned int size, char c)
{
	char *space = malloc(size * sizeof(c));

	if (space == NULL)
	{
		return (NULL);
	}

	return (space);
}
