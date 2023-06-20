#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * alloc_grid - Function returns  pointer to a 2 dimensional array of integer
 * @width:  The !st variable
 * @height: The 2nd Variable
 * Return: To NULL or tab
 * @BySalma.as
 */

int **alloc_grid(int width, int height)
{
	int x = 0;
	int y = 0;
	int **tab;
	int z = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	tab = (int **) malloc(sizeof(int *) * height);
	if (!tab)
		return (NULL);
	while (x < height)
	{
		tab[x] = malloc(sizeof(int) * width);
		if (!tab[x])
		{
			while (z <= x)
			{
				free(tab[z]);
				z++;
			}
			free(tab);
			return (NULL);
		}
		y = 0;
		while (y < width)
		{
			tab[x][y] = 0;
			y++;
		}
		x++;
	}
	return (tab);
}
