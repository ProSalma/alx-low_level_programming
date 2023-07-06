#include "main.h"


/**
 * clear_bit - Function to set the value of a bit to 0
 * @n: The number to set
 * @index: The index at which to set bit
 *
 * Return: To 1 if it worked, or -1 if else
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	set = ~(1 << index);
	*n = *n & set;
	return (1);
}
