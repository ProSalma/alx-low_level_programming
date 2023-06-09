#include "main.h"

/**
 *  _puts - Function prints a string
 * @str: the string
 * Return: Void
 * BySalma.as
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
