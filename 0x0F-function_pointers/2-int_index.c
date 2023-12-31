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
	int i;


	if (array && cmp && size)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(*array++))
				return (i);
		}
	}
	return (-1);
}
