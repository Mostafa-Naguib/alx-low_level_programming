#include "main.h"

/**
 * swap_int - A function that swaps
 * the values of two integers.
 *
 * Description:  A function that swaps
 * the values of two integers.
 *
 * @a: The first number.
 * @b: The second number.
 *
 *
 * Return: Always 0 (Success)
 */


void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
