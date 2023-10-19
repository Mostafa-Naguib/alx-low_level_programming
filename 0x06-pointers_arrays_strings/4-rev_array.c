#include "main.h"

/**
 * reverse_array - A function that reverses the content
 * of an array of integers.
 *
 * Description: a function that reverses the content of an array of integers.
 * @a: the array that you want to reverse..
 * @n: is the number of elements of the array.
 *
 * Return: Always 0 (Success)
 */


void reverse_array(int *a, int n)
{
	int i = 0;
	int *tmp = malloc(n * sizeof(int));

	for (i = 0; i < n; i++)
	{
		tmp[i] = a[n - i - 1];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = tmp[i];
	}

	free(tmp);
}

