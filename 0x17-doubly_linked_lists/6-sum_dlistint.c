#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the
 * data of a linked list
 * @head: pointer
 * Return: sum, else, 0
 */

int sum_dlistint(dlistint_t *head)
{
	int n_sum = 0;

	while (head != NULL)
	{
		n_sum += head->n;
		head = head->next;
	}

	return (n_sum);
}

