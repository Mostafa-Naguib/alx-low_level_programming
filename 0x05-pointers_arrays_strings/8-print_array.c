#include "main.h"

/**
 * print_array - a function that prints n elements
 * of an array of integers, followed by a new line.
 *
 * Description: a function that prints n elements
 * of an array of integers, followed by a new line.
 *
 * @a: the pointer of the fist element in the array
 * @n: the length of the array
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
			break;
		}

		printf("%d, ", a[i]);
	}
	putchar('\n');
}

