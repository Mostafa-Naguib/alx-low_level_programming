#include "function_pointers.h"


/**
 * int_index - A function that searches for an integer.
 *
 * Description: a function that searches for an integer.
 * @array: The array...
 * @size: The size of the array...
 * @cmp: The function...
 *
 * Return: The index of the first element match...
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int *end = array + size;
	int result;

	if (size <= 0)
		return (-1);

	if (array || cmp)
	{
		while (array < end)
			result = cmp(*array++);
			if (result)
				return (result);
	}

	return (-1);
}
