#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to the number to set
 * @index: index at which to set bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	unsigned long int bitmask = 1UL << index;

	while (bitmask != 0)
	{
		if ((*n & bitmask) != 0)
		{
			*n = *n & ~bitmask;
			return (1);
		}
		bitmask >>= 1;
	}

	return (-1);
}
