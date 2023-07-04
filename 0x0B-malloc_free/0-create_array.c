#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * and initializes it with a specific character.
 * @size: the size of the array
 * @c: initial value for each element
 *
 * Return: a pointer to the array, or NULL if it fails
 */


char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x = 0;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	while (x < size)
	{
		array[x] = c;
		x++;
	}

	return (array);
}
