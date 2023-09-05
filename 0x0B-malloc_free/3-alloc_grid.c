#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to 2 dimentional array
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: NULL if either of the inputs is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	grid = malloc(height * sizeof(int*));
	for (i = 0; i < height; i++)
		grid[i] = malloc(width * sizeof(int));

	if (width <= 0 || height <= 0 || grid == 0)
	{
		return (NULL);
	}


	for (i = 0; i < height; i++)
	{
		if (grid[i] == 0)
		{
			while (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
