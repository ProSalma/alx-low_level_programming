#include "main.h"

/**
 * _puts_recursion - This function prints a string
 * @s: The pointer to string
 * Return: Void
 * @By_Salma.as
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s); /*Prints the string*/
	_puts_recursion(++s); /*Do the recursion*/
}
