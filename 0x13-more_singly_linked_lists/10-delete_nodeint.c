#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node
 * at index of a linked list
 * @head: linked list
 * @index: index
 * Return: 1, else, -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *x = *head;
	listint_t *node = NULL;
	unsigned int y = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(x);
		return (1);
	}

	while (y < index - 1)
	{
		if (x == NULL || (x->next) == NULL)
			return (-1);
		x = x->next;
		y++;
	}

	node = x->next;
	x->next = node->next;
	free(node);

	return (1);
}

