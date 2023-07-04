#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1 and -1 if else
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}
