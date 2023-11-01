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
	int **arr = malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
