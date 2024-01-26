#include "lists.h"

/**
 * print_dlistint - Prints all the elem
 * of a dlistint_t list
 * @dlistint_t: list name
 * @h: pointer
 * Return: num of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_cnt = 0;

	if (h == NULL)
		return (node_cnt);
	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_cnt++;
	}

	return (node_cnt);
}

