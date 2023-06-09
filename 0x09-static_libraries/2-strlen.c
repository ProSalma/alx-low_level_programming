#include "main.h"

/**
 * _strlen - Function generates length of the string
 * @s: The variables
 * Return: To integer
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
