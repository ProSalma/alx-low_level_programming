#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - Finds the length of a string.
 * @str: String to find the length of.
 *
 * Return: Length of the string.
 */
unsigned int _strlen(char *str)
{
	unsigned int length = 0;

	for (; str[length]; length++)
		;
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
	list_t *new_node;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
