#include "variadic_functions.h"


/**
 * print_numbers - Function prints numbers followed by a new line
 * @n: The number of parameter
 * @separator: The separator between two numbers
 * @...: Numbers
 * Return: Void, no return
 * @BySalma.as
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x = 0;
	va_list ap;
	va_start(ap, n);
	while (x < n)
	{
		printf("%d", va_arg(ap, int));
		if (separator && x < n - 1)
		printf("%s", separator);
		x++;
	}
	printf("\n");
	va_end(ap);
}
