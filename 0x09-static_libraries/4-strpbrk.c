#include "main.h"
#include <stddef.h>


/**
 * _strpbrk - Function that search a string for any of a set
 * @s: The 1st parameter
 * @accept: Matches one of the bytes or NULL
 * Return: To s or NuLL
 * BySalma.as
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
			s++;
		}
	}
	return (NULL);
}
