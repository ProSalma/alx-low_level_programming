#include "main.h"

/**
 * _print_rev_recursion - This function prints string in recursion
 * @s: The pointer to string
 * Return: Void
 * @BySalma.as
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	return;
	_print_rev_recursion(s + 1); /*Do the string recursion first*/
	_putchar(*s); /*Prints the string*/
}
