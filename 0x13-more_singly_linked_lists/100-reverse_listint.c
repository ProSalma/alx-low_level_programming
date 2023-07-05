#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: double pointer to the start of the list
 *
 * Return: a pointer to the first node of the reversed list
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	prev = NULL;
	for (; *head != NULL; *head = next)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
	}

	*head = prev;
	return (*head);
}
