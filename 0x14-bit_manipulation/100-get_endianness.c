#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 *
 * Return: To 0 or 1
 */


int get_endianness(void)
{
	unsigned int value = 1;
	char *byte = (char *)&value;

	return ((int)*byte);
}
