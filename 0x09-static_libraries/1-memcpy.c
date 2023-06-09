#include "main.h"

/**
 * _memcpy - Copies values of num bytes from the location to memo
 * @dest: The 1st variable
 * @src: The 2nd variable
 * @n: The 3rd variable
 * Return: To s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
