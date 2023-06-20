#include "main.h"
#include <stddef.h>
#include <stdlib.h>


/**
 * create_array - Function  that creates an array starting with  a char
 * @size:  The integer size
 * @c: The character
 * Return: The Return to arr
 * @BySalma.as
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	i = 0;
	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (!arr)
		return (NULL);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
