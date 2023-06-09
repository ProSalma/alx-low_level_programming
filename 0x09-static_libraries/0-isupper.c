#include "main.h"

/**
 * _isupper - Function checks the uppercase letters
 * @c: The variable
 * Return: To 0 or 1
 * @BySalma.as
 */

int	_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
