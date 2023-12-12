#include "lists.h"

/**
 * free_listint - frees a listint_t func
 * @head: listint
 */

void free_listint(listint_t *head)
{
	listint_t *x;

	while (head != NULL)
	{
		x = head->next;
		free(head);
		head = x;
	}
}
