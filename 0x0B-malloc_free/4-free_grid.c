#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2 dim grid previously created
 *
 * @grid: 2 dim array
 * @height: height of the array
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
