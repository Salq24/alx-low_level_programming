#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: list to be fred
 */

void free_list(list_t *head)
{
	list_t *x;

	while (head)
	{
		x = head->next;
		free(head->str);
		free(head);
		head = x;
	}
}
