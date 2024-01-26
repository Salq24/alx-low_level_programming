#include "lists.h"

/**
 * dlistint_len - Returns the number of elem
 * in dlistint_t
 * @h: pointer
 * Return: num of elem
 */

size_t dlistint_len(const dlistint_t *h)
{
	int node_cnt = 0;

	while (h != NULL)
	{
		h = h->next;
		node_cnt++;
	}
	return (node_cnt);
}
