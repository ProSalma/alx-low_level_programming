#include "main.h"

/**
 * _sqrt_recurs - Function returns the natural square root of a number
 * @i: The 1st variable
 * @n: The 2nd variable
 * Return: To the result of square root
 */
int _sqrt_recurs(int i, int n)
{
	if (n == (i * i))
	{
		return (i);
	}
	else if (i == n || i == -n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_recurs(i + 1, n));
	}
}

/**
 * _sqrt_recursion - function returns the natural square root of a number
 * @i: The variable
 * Return: The value of n
 */

int _sqrt_recursion(int i)
{
	if (i == 0)
	{
		return (0);
	}
	return (_sqrt_recurs(1, i));
}
