#include "lists.h"

/**
 * list_len - Counts the number of elements in a linked list.
 * @h: Pointer to the start of the linked list.
 *
 * Return: The number of elements in the linked list.
 */



size_t list_len(const list_t *h)
{
	const list_t *current = h;
	unsigned int count = 0;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
