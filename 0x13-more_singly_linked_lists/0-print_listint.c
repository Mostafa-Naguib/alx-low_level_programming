#include "lists.h"
void print_int(int num);

/**
 * print_listint -a function that prints all the elements of a listint_t list.
 *
 * @h: The head of linked list
 *
 * Return: The number of nodes
 */


size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	int i = 0;

	for (tmp = h; tmp != 0; tmp = tmp->next)
	{
		print_int(tmp->n);
		_putchar('\n');
		i++;
	}

	return (i);
}


/**
 * print_int - Print the number.
 *
 * @num: The number.
 *
 */

void print_int(int num)
{
	int divisor, digit;


	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	divisor = 1;
	while (num / divisor > 9)
		divisor *= 10;

	while (divisor > 0)
	{
		digit = num / divisor;
		_putchar(digit + '0');
		num %= divisor;
		divisor /= 10;
	}
}


