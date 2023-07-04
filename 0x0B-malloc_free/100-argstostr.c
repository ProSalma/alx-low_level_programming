#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: The arguments count
 * @av: The arguments vector
 *
 * Return: Pointer to a new string, or NULL if it fails
 */



char *argstostr(int ac, char **av)
{
	char *str, *s;
	int x, y, z, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		s = av[i];
		y = 0;

		while (s[y++])
			len++;
		len++;
	}

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (x = 0, y = 0; x < ac && y < len; x++)
	{
		s = av[x];
		z = 0;

		while (s[z])
		{
			str[y] = s[z];
			z++;
			y++;
		}
		str[y++] = '\n';
	}
	str[y] = '\0';

	return (str);
}
