#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binary number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int x = 0;
	unsigned int num = 0;

	if (!b)
		return (0);

	while (b[x] != '\0')
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		x++;
	}

	x = 0;
	while (b[x] != '\0')
	{
		num <<= 1;
		if (b[x] == '1')
			num += 1;
		x++;
	}

	return (num);
}
