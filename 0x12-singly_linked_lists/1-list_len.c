#include <stdio.h>
#include "lists.h"

/**
 * list_len - print out the no of nodes in a list
 * @h: pointer to point to the next node
 * Return: no of nodes
 */
size_t list_len(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		k++;
		h = h->next;
	}
	return (k);
}
