#include "variadic_functions.h"

/**
 * print_all - Function prints all of the arguments when specified
 * @format: Specifies the necessary operations
 * @...: Numbers
 * Return: Void, no return
 * @BySalma.as
 */


void print_all(const char * const format, ...)
{
	int x = 0;
	va_list ap;
	char *s;
	char *separator = "";

	va_start(ap, format);
	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", separator, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(ap, double));
					break;
				case 's':
					s = va_arg(ap, char *);
					if (!s)
						s = "(nil)";
					printf("%s%s", separator, s);
					break;
				default:
					x++;
					continue;
			}
			separator = ", ";
			x++;
		}
	}
	putchar('\n');
	va_end(ap);
}
