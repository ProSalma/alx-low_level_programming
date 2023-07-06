#include "main.h"

/**
 * get_endianness - Returns the endianness of the system
 *
 * Return:To  0 if endian is big , 1 if small
 */
int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
