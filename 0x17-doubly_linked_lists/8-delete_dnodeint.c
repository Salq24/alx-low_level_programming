#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at
 * index of a linked list
 * @head: pointer
 * @index: index of node to be deleted
 * Return: 1 , else, -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nd = *head;
	unsigned int cnt = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	while (nd != NULL && cnt < index)
	{
		nd = nd->next;
		cnt++;
	}
	if (nd == NULL)
		return (-1);

	if (nd->prev != NULL)
		nd->prev->next = nd->next;
	else
		*head = nd->next;

	if (nd->next != NULL)
		nd->next->prev = nd->prev;
	free(nd);
	return (1);
}
