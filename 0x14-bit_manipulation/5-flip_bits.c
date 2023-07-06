#include "main.h"

/**
 * flip_bits - calculates the number of different bits between two numbers.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits that need to be flipped
 *         to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int flipCount = 0;
	unsigned int i = 0;

	while (i < (sizeof(unsigned long int) * 8))
	{
		if ((diff & 1) == 1)
			flipCount++;
		diff >>= 1;
		i++;
	}

	return (flipCount);
}
