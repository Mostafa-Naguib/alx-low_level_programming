#include "main.h"
#include <stdlib.h>


/**
 * _abs - computes the absolute value of an integer.
 *
 * Description: computes the absolute value of an integer.
 * @n: the number to test on
 *
 * Return: Always 0 (Success)
 */


int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
