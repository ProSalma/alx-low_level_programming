#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
 * _strlen - Computes the length of a string.
 * @str: String to compute the length of.
 *
 * Return: The length of the string.
 */


unsigned int _strlen(const char *str)
{
	unsigned int length = 0;

	while (str[length] != '\0')
		length++;

	return (length);
}


/**
 * add_node - Adds a node to the beginning of a linked list.
 * @head: Double pointer to a linked list.
 * @str: String to add to the new node.
 *
 * Return: Pointer to the new node.
 */


list_t *add_node(list_t **head, const char *str)
{
	if (!str)
		return (NULL);

	list_t *new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
