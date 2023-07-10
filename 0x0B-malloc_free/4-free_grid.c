#include <stdlib.h>
#include "main.h"

/**
 * free_grid - A function that frees a previously 2 dimensional grid
 * @grid: grid to free
 * @height: height of the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int y;

	if (grid == NULL || height == 0)
		return;

	for (y = 0; y < height; y++)
		free(grid[y]);

	free(grid);
}
