#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * Description: prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: The two dimensional array.
 * @size: The size of the array
 *
 */

void print_diagsums(int (*a), int size)
{
	int i;
	int j = size - 1;
	int sum_1 = 0;
	int sum_2 = 0;


	for (i = 0; i < size; i++)
	{
		sum_1 += *(a + i * size + i);
		sum_2 += *(a + i * size + size - i - 1);
	}

	printf("%d %d\n", sum_1, sum_2);

}

