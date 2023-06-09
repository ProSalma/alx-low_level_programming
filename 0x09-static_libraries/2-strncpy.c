#include "main.h"

/**
* _strncpy - Funtion copies string from src to dest
* @dest: The destination
* @src: The source
* @n: the counter
* Return: To dest
* BySalma.as
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
