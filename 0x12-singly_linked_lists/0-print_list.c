#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes printed.
 */




size_t print_list(const list_t *h)
{
	size_t s = 0;

	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		s++;
	}

	return (s);
}
