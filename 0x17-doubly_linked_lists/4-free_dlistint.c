#include "lists.h"

/**
 * free_dlistint - frees a doubly linked
 * list dlistint_t
 * @head: pointer
 * Return:..
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tp;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
	}

	while ((tp = head) != NULL)
	{
		head = head->next;
		free(tp);
	}
}
