#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees memory from a 2d grid
 * @grid: Pointer to the grid
 * @height: Is the height of the array
 * Return: Void
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
