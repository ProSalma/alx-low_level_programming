#include "main.h"

/**
 * _strstr - Function that locates a substring
 * @haystack: The longer string to seach
 * @needle: The first occurrence of the substring
 * Return: To 0 or else
 * BySalma.as
 */

char *_strstr(char *haystack, char *needle)
{
	int x = 0;
	int y = 0;

	if (needle[y] == '\0')
		return (haystack);
	while (haystack[x] != '\0')
	{
		while (haystack[x + y] == needle[y] && haystack[x + y] != '\0')
			y++;
		if (needle[y] == '\0')
			return (haystack + x);
		x++;
		y = 0;
	}
	return (0);
}
