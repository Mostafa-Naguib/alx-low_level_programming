#include "main.h"

int sqrt_helper(int n, int x);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * _sqrt_helper - This function helps us to in square calculation
 *
 * Description: returns the natural square root of a number.
 * @n: The number
 *
 * Return: The result...
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (sqrt_helper(n, 1));
}


int sqrt_helper(int n, int x)
{
	if (n == x * x)
		return (x);

	if (x * x > n)
		return (-1);

	return (sqrt_helper(n, x + 1));
}
