#include "main.h"
#include <unistd.h>

/**
 * _strlen_recursion - This function returns  the lenth of a string
 * @s: The pointer to string
 * Return: Void
 * @BySalma.as
 */

int _strlen_recursion(char *s)
{
	int i = 0;
	if (*s == '\0')
	{	
        i += _strlen_recursion(s + 1) + 1;
	}
	return (i);

}
