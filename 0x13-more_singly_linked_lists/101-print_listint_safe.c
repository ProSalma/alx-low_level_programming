#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _r - Reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: The old list to append
 * @size: Size of the new list (always one more than the old list)
 * @new: New node to add to the list
 *
 * Return: The new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
const listint_t **newlist;
size_t x;

newlist = malloc(size * sizeof(listint_t *));
if (newlist == NULL)
{
free(list);
exit(98);
}
for (x = 0; x < size - 1; x++)
newlist[x] = list[x];
newlist[x] = new;
free(list);
return (newlist);
}

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: The pointer to the start of the list
 *
 * Return: The number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
size_t x, count = 0;
const listint_t **list = NULL;

while (head != NULL)
{
for (x = 0; x < count; x++)
{
if (head == list[x])
{
printf("-> [%p] %d\n", (void *)head, head->n);
free(list);
return (count);
}
}
count++;
list = _r(list, count, head);
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
free(list);
return (count);
}
