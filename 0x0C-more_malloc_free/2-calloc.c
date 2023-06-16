#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function allocates memory for an array
 * @nmemb: The allocate memory
 * @size: The allocate element
 * Return: To the pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < (nmemb * size); b++)
	{
		ptr[b] = 0;
	}
	return (ptr);
}
