#include "main.h"

/**
 * _strncat - Function concatenates two Strings
 * @dest: The 1st parameter
 * @src: The 2nd parameter
 * @n: The length
 * Return: The string
 * @BySalma.as
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x])
	{
		x++;
	}
	while (src[y] && y < n)
	{
		dest[x++] = src[y++];
	}
	dest[x] = '\0';
	return (dest);
}
