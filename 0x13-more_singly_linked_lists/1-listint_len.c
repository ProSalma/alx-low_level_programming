#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @head: pointer to the linked list
 *
 * Return: number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *head)
{
	size_t count;

	for (count = 0; head != NULL; head = head->next)
	{
		count++;
	}

	return (count);
}
