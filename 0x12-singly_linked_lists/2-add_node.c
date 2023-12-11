#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning
 * of a list_t list
 * @head: double pointer
 * @str: new string
 * Return: address of new element, else null
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *x;
	unsigned int y = 0;

	while (str[y])
		y++;

	x = malloc(sizeof(list_t));
	if (x == NULL)
		return (NULL);

	x->str = strdup(str);
	x->len = y;
	x->next = (*head);
	(*head) = x;

	return (*head);
}
