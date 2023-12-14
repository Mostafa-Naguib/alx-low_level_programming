#include "main.h"

/**
 * clear_bit - Entry point
 *
 * @n: describe the parameter
 * @index: describe the parameter
 *
 * Return: Always 0 (Success)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask = sizeof(*n) * 8;

	if (index > mask)
		return (-1);

	mask = 1 << index;

	*n &= mask;

	return (1);
}
