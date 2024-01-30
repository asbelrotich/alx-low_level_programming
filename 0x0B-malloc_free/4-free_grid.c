#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees dimensional grid
 * @grid: address of the 2D grid
 * @heigh: height of te grid
 *
 * Return: nothing
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
