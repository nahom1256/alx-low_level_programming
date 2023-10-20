#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * @head: double pointer
 * @str: new string to add in the node
 *
 * Return: the address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *k;
	unsigned int len = 0;

	while (str[len])
		len++;

	k = malloc(sizeof(list_t));
	if (!k)
		return (NULL);

	k->str = strdup(str);
	k->len = len;
	k->next = (*head);
	(*head) = k;

	return (*head);
}

