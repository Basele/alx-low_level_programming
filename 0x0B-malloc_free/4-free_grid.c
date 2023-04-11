#include <stdlib.h>

/**
 * free_grid -  free up a 2 dimensional  array grid
 *
 * @grid: double pointer 2D grid
 * @height: height of grid
 *
 * Return: nothing
*/

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
