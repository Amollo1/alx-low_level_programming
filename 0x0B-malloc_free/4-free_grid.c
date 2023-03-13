#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - This frees 2d array
 * @grid: The 2d grid
 * @height: The height dimension of grid
 * Description: The frees memory of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
	{
		free(grid[m]);
	}
	free(grid);
}
