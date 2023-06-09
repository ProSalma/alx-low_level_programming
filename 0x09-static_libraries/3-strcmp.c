#include "main.h"

/**
 * _strcmp - Function compares two string
 * @s1: The 1st string
 * @s2: The 2nd string
 * Return: To s or O
 * BySalma.as
 */


int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		if (s1[i] < s2[i] || s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
