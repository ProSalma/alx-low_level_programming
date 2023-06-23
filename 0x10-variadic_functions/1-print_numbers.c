#include "variadic_functions.h"

/**
 * print_numbers - printd num by \n
 * @separator: The separator between two numbers
 * @n: The number of parameter
 * Return: Void, no return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
