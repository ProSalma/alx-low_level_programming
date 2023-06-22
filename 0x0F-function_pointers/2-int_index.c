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
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
