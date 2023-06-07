#include "main.h"

/**
 * _strlen_recursion - This function returns length of string
 * @s: The pointer to string
 * Return: To int
 * @BySalma.as
 */


int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i = i + 1;
		i += _strlen_recursion(s + 1);
	}

	return (i);
}
