#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 *
 * @n: describe the parameter
 * @index: describe the parameter
 *
 * Return: The value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = sizeof(n) * 8;
	int bit;

	if (index >= mask)
		return (-1);

	bit = n >> index;
	return (bit & 1);
}
