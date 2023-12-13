#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new
 * node at a given position
 * @head: linked list
 * @idx: index where new node is added
 * @n: data
 * Return: new node address, else NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *x = *head;
	listint_t *node1;
	unsigned int y;

	node1 = malloc(sizeof(listint_t));
	if (node1 == NULL)
		return (NULL);

	node1->n = n;
	node1->next = NULL;

	if (idx == 0)
	{
		node1->next = *head;
		*head = node1;
		return (node1);
	}

	for (y = 0; x && y < idx; y++)
	{
		if (y == idx - 1)
		{
			node1->next = x->next;
			x->next = node1;
			return (node1);
		}

		else
			x = x->next;
	}
	return (NULL);
}

