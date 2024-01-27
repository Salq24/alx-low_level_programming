#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a
 * given position
 * @h: pointer
 * @idx: new node index
 * @n: data
 * Return: new node address, else, NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tp = *h;
	unsigned int cnt = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*h == NULL && idx == 0)
	{
		*h = new;
		return (new);
	}

	while (tp != NULL && cnt < idx)
	{
		tp = tp->next;
		cnt++;
	}

	if (idx > cnt)
	{
		free(new);
		return (NULL);
	}

	if (tp->prev != NULL)
	{
		tp->prev->next = new;
		new->prev = tp->prev;
	}
	else
	{
		*h = new;
	}
	new->next = tp;
	tp->prev = new;

	return (new);
}
