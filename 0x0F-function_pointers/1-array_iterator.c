#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given
 * as a parameter on each element of an array.
 *
 * Description: a function that executes a function given
 * as a parameter on each element of an array.
 * @array: The array...
 * @size: The size of the array
 * @action: A pointer to a function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	while (array <= end)
		action(*array++);
}
