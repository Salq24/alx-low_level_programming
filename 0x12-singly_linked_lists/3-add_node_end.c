#include "lists.h"

/**
 * add_node_end - adds a new node at
 * the end of a list_t list
 * @head: double pointer
 * @str: new string
 * Return: address of new element, else null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_ele;
	list_t *x = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	new_ele = malloc(sizeof(list_t));
	if (new_ele == NULL)
		return (NULL);

	new_ele->str = strdup(str);
	new_ele->len = length;
	new_ele->next = NULL;

	if (*head == NULL)
	{
		*head = new_ele;
		return (new_ele);
	}
	while (x->next)
		x = x->next;

	x->next = new_ele;

	return (new_ele);
}

