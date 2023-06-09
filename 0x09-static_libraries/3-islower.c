#include "main.h"

/**
 *_islower - Function tests if the character is lowercase
 * @c: The character
 * Return: To 1 if lowercase, and 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
