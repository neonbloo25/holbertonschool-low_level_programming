#include <stdlib.h>
#include "main.h"
/**
 * free_grid - purge array of sin
 * @grid: sinner
 * @height: sins
 * Return: zero.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
