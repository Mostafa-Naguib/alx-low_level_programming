#include "main.h"


/**
 * array_range - A function that creates an array of integers.
 *
 * Description: A function that creates an array of integers.
 * @min: The start
 * @max: The end
 *
 * Return: The pointer to new array contain numbers from min to max
 */


int *array_range(int min, int max)
{
	int i = 0;
	int *arr;
	int len;

	if (min > max)
		return (0);

	len = (max - min) + 1;

	arr = malloc(len * sizeof(int));
	if (arr == 0)
		return (0);

	for (; i < len; i++)
		arr[i] = min++;

	return (arr);
}

