#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number to check bits in
 * @index: index at which to check bit
 *
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitmask = 1UL << index;
	unsigned long int check = n & bitmask;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	while (bitmask != 0)
	{
		if (check == bitmask)
			return (1);
		bitmask >>= 1;
		check = n & bitmask;
	}

	return (0);
}
