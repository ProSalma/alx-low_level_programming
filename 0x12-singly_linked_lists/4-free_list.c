#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the list_t list.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	for (; head != NULL; head = tmp)
	{
		tmp = head->next;
		free(head->str);
		free(head);
	}
}
