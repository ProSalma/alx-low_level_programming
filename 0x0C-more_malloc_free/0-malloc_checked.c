#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Function allocates the memory using malloc
 * @b: The bytes to allocate
 * Return: To memo
 */


void *malloc_checked(unsigned int b)
{
	void *memo;

	memo = malloc(b);
	if (memo == NULL)
	{
		exit(98);
	}
	return (memo);
}
