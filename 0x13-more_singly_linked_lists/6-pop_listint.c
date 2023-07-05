#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the beginning of the list
 *
 * Return: the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *first;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	first = *head;
	*head = first->next;
	data = first->n;
	free(first);
	return (data);
}
