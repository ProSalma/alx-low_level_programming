#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @head: The list to print
 *
 * Return: To number of elements in the list
 */


size_t print_listint(const listint_t *head)
{
	size_t count;

	for (count = 0; head != NULL; head = head->next, count++)
	{
		printf("%d\n", head->n);
	}

	return (count);
}
