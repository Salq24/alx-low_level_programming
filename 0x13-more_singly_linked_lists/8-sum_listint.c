#include "lists.h"

/**
 * sum_listint - returns the sum of all
 * the data of a linked list
 * @head: linked luist
 * Return: sum else, 0
 */

int sum_listint(listint_t *head)
{
	listint_t *x = head;
	int add = 0;

	while (x)
	{
		add = add + (x->n);
		x = x->next;
	}

	return (add);
}
