#include "main.h"

/**
 * factorial - This function returns factorial of an int
 * @n: The integer
 * Return: To int
 * @BySalma.as
 */

int factorial(int n)
{
	int i;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		i = n * factorial(n - 1);
	}
	return (i);
}
