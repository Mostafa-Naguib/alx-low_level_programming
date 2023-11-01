#include "main.h"

/**
 * free_grid -a function that concatenates all the arguments of your program.
 *
 * Description: a function that concatenates all the arguments of your program.
 * @grid: the matrix
 * @height: the height of the matrix
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
