#include <stdlib.h>
#include "lists.h"

/**
 * free_list - this function frees a linked list
 * @head: list to be freed
 */
void free_list(list_t *head)
{
	list_t *tem;

	while (head)
	{
		tem = head->next;
		free(head->str);
		free(head);
		head = tem;
	}
}

