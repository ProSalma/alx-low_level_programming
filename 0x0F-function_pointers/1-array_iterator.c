#include "function_pointers.h"
#include <unistd.h>

/**
 * array_iterator - Function given as a parameter
 * @array: The array to execute
 * @size: The size of the array
 * @action: The pointer to the function to use
 * Return: Void, no return
 * @BySalma.as
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || !action)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}

}
