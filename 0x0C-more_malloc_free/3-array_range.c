#include "main.h"
#include <stdlib.h>

/**
 * array_range - write function that creates an array of integers
 * @min: The minimum
 * @max: The maximum
 * Return: The pointer to the newly created array
 * @BySalma.as
 */

int *array_range(int min, int max)
{
int *arr;
int num, i;

	if (min > max)
	{
		return (NULL);
	}
	num = max - min + 1;
	arr = malloc(sizeof(int) * num);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
