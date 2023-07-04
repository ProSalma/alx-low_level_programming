#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * containing a copy of the string given as a parameter.
 * @str: The source string
 *
 * Return: A pointer to the duplicated string.
 *         It returns NULL if insufficient memory was available.
 */


char *_strdup(char *str)
{
	char *copy;
	int x, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy = (char *)malloc((sizeof(char) * len) + 1);
	if (copy == NULL)
		return (NULL);

	for (x = 0; x < len; x++)
		copy[x] = str[x];
	copy[len] = '\0';

	return (copy);
}
