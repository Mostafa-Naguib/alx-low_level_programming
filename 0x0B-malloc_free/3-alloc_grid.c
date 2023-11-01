#include "main.h"

/**
 * alloc_grid -  a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 *
 * Description:  a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @width: The width length in a matrix
 * @height: The height length in a matrix
 *
 * Return: (arr)
 */


int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (0);

	arr = malloc(height * sizeof(int *));

	if (arr == 0)
		return (0);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));

		if (arr[i] == 0)
		{
			while (i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
