int helper_prime_number(int n, int x);
#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0.
 *
 * Description: returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: The number
 *
 * Return: 0 (not a prime number) 1 (a prime number)
 */


int is_prime_number(int n)
{
	return (helper_prime_number(n, 0));
}

/**
 * helper_prime_number - check if the number is prime or not
 *
 * Description: returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: The number
 * @x: The counter
 *
 * Return: 0 (not a prime number) 1 (a prime number)
 */

int helper_prime_number(int n, int x)
{
	if (n % x == 0)
	{
		return (0);
	}
	if (x == n / 2)
	{
		return (1);
	}

	return (helper_prime_number(n, x + 1));
}


