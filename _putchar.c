#include "main.h"
#include <unistd.h>

/**
* _putchar -This function writes the character c to stdout
* @c: The character to print
* Return: On success 1.
* On error, -1 is returned and error is set appropriately.
* @bySalma.as
*/

int _putchar(char c)
{
	write(1, &c, 1);
}
