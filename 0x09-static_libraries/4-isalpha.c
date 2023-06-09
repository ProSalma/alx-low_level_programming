#include "main.h"

/**
 * _isalpha - Function checks if the character is from english alphabet
 * @c : The character to check
 * Return: To 1 if true, and 0 if not
 * BySalma.as
 */

int	_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
