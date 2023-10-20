#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements
 * @h: pointer
 *
 * Return: the size of the nodes or the no of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		if (!h->str)
			printf("[0](nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		k++;
		h = h->next;
	}
	return (k);
}
