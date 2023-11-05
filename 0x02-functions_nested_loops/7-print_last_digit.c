#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * Description: prints the last digit of a number.
 * @n: the number
 *
 * Return: The last digit of a number
 */

int print_last_digit(int n)
{
	return (_abs(n) % 10);
}
