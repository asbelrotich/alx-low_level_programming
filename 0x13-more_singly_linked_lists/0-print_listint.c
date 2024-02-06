#include <stdio.h>
#include "main.h"
/**
 * print_listint - Prints all the elements of a linked list
 * @h: The head of linked list
 *
 * return: The number of nodes of the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
