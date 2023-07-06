#include "main.h"

/**
 * set_bit - Function sets the value of a bit to 1 at a given index.
 * @n: The number to set
 * @index: The index to set bit
 *
 * Return: To 1 if it worked, or -1 if else
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = 1 << index;
	*n = *n | set;
	return (1);
}
