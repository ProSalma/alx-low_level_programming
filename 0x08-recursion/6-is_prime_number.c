#include "main.h"

/**
 * _detects - Function detects if number is prime
 * @i: The 1st variable
 * @n: The 2nd variable
 * Return: To 0 or 1 or else
 * @BySalma.as
 */

int _detects(int i, int n)
{
	if (n < 2 || n % i == 0)
	{
		return (0);
	}
	else if (i > n / 2)
	{
		return (1);
	}
	else
	{
		return (_detects(i + 1, n));
	}
}

/**
 * is_prime_number - Function calculates if a number is prime recursively
 * @i: The variable
 * Return: To 1 or else
 */

int is_prime_number(int i)
{
	if (i == 2)
	{
		return (1);
	}
	return (_detects(2, i));
}
