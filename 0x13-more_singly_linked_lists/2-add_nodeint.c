#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: double pointer to the beginning of a listint_t list
 * @data: integer to add to the list
 *
 * Return: address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int data)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = data;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
