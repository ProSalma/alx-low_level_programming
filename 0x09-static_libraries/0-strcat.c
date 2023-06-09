#include <stdio.h>

/**
 * _strcat - Function prints  n elements  of array
 * @dest: The pointer variable
 * @src: The variable
 * Return: Void
 * @BySalma.as
 */

char *_strcat(char *dest, char *src)
{

	int x = 0;
	int y = 0;

	while (dest[x])
	{
		x++;
	}
	while (src[y])
	{
		dest[x + y] = src[y];
		y++;
	}
	dest[x + y] = '\0';
	return (dest);
}
