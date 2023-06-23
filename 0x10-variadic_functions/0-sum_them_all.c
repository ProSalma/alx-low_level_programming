#include "variadic_functions.h"

/**
 * sum_them_all - adds all the numbers
 * @n: The number of parameters passed
 * @...:Number
 *
 * Return: To sum
 * @BySalma.as
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum  = 0;
	unsigned int x = 0;

	va_start(ap, n);
	while (x < n)
	{
		sum += va_arg(ap, int);
		x++;
	}
	va_end(ap);
	return (sum);
}
