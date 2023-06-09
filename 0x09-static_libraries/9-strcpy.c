#include "main.h"

/**
 * _strcpy - Function copies the string pointed from src to dest
 * @dest: The argument
 * @src: The argument
 * Return: To dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
