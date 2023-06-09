#include <unistd.h>

/**
 * _putchar - Function that writes a character to stdout
 * @c: The character
 * Return :Void
 * BySalma.as
 */

void	_putchar(char c)
{
	write(1, &c, 1);
}
