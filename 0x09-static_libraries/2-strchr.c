#include "main.h"
#include <stddef.h>

/**
 * _strchr - Function locates a character in a string
 * @s: The string
 * @c: The character
 * Return: Pointer to the first occurence of the character
 * BySalma.as
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
