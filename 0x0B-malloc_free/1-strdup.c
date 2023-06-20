#include <stdio.h>
#include <stdlib.h>


/**
 * _strdup - Function returns a pointer to a newly allocated space in memory
 * @str:  The variable
 * Return: To NULL or copy
 * @BySalma.as
 */


char *_strdup(char *str)
{
	int x = 0;
	int y = 0;
	char *copy;

	if (!str)
		return (NULL);
	while (str[y])
		y++;
	copy = malloc((y + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	while (str[x])
	{
		copy[x] = str[x];
		x++;
	}
	copy[x] = str[x];
	return (copy);
}
