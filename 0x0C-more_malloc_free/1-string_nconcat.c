#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Function that concatenates two strings
 * @s1: The !st string
 * @s2: The 2nd string
 * @n: THe bytes
 * Return: The pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int x, y, z;

	if (s1 == NULL)
	{
		x = 0;
	}
	else
	{
		for (x = 0; s1[x]; x++)
			;
	}
	if (s2 == NULL)
	{
		y = 0;
	}
	else
	{
		for (y = 0; s2[y]; y++)
			;
	}
	if (y > n)
	{
		y = n;
	}
	concat = malloc(sizeof(char) * (x + y + 1));
	if (concat == NULL)
		return (NULL);
	for (z = 0; z < x; z++)
		concat[z] = s1[z];
	for (z = 0; z < y; z++)
		concat[z + x] = s2[z];
	concat[x + y] = '\0';
	return (concat);
}
