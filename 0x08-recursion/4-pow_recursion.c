#include "main.h"

/**
 * _pow_recursion -  Function returns the value of x raised to the power of y
 * @x: int type 1st argument
 * @y: int type 2nd argument
 * Return: Void
 * @BySalma.as
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
