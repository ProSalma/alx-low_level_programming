#include "main.h"

/**
 * get_endianness - Function returns endianness of the system
 *
 * Return: 0 if endian is big , 1 if small
 */


int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
