#include "lists.h"

/**
 * listint_len  - returns the num of elem
 * in a listint_t linked list
 * @h: linked list
 * Return: num of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		x++;
		h = h->next;
	}

	return (x);
}

