#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
 * alloc_grid - A that returns a pointer to a 2 dimensional array of integers.
 * @width: The width of the Arrays
 * @height: The height of the Arrays
 *
 * Return: A Pointer to a Pointer to an Integer
 */

int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (width > 0 && height > 0)
	{
		grid = malloc(height * sizeof(int *));
		if (grid == NULL)
		{
			free(grid);
			return (NULL);
		}

		for (i = 0; i < height; i++)
		{
			grid[i] = malloc(width * sizeof(int));
			if (grid[i] == NULL)
			{
				free(grid[i]);
				free(grid);
				break;
			}

			for (j = 0; j < width; j++)
				grid[i][j] = 0;
		}

		return (grid);
	}
	return (NULL);
}
