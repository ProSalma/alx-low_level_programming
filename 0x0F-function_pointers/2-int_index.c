#include "function_pointers.h"
#include <unistd.h>


/**
  * int_index - Function that searches for an integer
  * @array: The array to check
  * @size: The number of elements in the array 
  * @cmp: The pointer to be used to compare values
  * Return: To -1 or to integer
  * @BySalma.as
  */


int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (!array || !cmp || size <= 0)
		return (-1);
	while (x < size)
	{
		if (cmp(array[x]))
			return (x);
		x++;
	}
	return (-1);
}
