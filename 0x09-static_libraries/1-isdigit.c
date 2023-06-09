#include "main.h"

/**
 * _isdigit - Function checks if the number are digit
 * @c: The variable
 * Return: To 0 or 1
 * BySalma.as
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
