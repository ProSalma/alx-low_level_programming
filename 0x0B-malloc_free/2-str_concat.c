#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _strlen - The 1st Function
 * @s:  The variable
 * Return: To x
 * @BySalma.as
 */

unsigned int _strlen(char *s)
{
	unsigned int x = 0;

	while (s[x])
		x++;
	return (x);
}



/**
 * str_concat - The 2nd Function
 * @s1:  The !st variable
 * @s2: The @nd variable
 * Return: To NULL or pointer
 */

char *str_concat(char *s1, char *s2)
{
	int x = 0;
	int y = 0;
	int size;
	char *p;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	size = _strlen(s1) + _strlen(s2) + 1;
	p = malloc(size * sizeof(char));
	if (!p)
		return (NULL);
	while (s1[x])
	{
		p[x] = s1[x];
		x++;
	}
	while (s2[y])
	{
		p[x + y] = s2[y];
		y++;
	}
	p[x + y] = s2[y];
	return (p);
}
