#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that free the second array
 * @grid: second grid - 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */

void free_grid(int **grid, int height)
{
	int u;

	for (u = 0; u < height; u++)
	{
		free(grid[u]);
	}
	free(grid);
}
