#include "main.h"
#include <unistd.h>

/**
 *_print_rev_recursion - This function prints reversed string
 * @s: The pointer to string
 * Return: Void
 * @BySalma.as
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1); /*Prints string reversed*/
	_putchar(*s);
}
