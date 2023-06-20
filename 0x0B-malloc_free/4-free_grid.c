#include "main.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * free_grid - Function  frees a 2 dimensional grid 
 * @grid:  The variable
 * @height: The Variable
 * Return: Void, no return
 * @BySalma.as
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
