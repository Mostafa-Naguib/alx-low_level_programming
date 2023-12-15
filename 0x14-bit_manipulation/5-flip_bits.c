#include "main.h"

/**
 * flip_bits - Entry point
 *
 * @n: describe the parameter
 * @m: describe the parameter
 *
 * Return: Always 0 (Success)
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR = n ^ m;

	unsigned int counter = 0;

	while (XOR)
	{
		counter += (XOR & 1);

		XOR >>= 1;
	}

	return (counter);
}
