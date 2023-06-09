#include "main.h"

/**
 * _memset - Function fils memory with a constant byte
 * @n: The bytes
 * @s: The Constant Byte
 * @b: The memory area pointer
 * Return: To a pointer in the memory 
 * @BySalma.as
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
