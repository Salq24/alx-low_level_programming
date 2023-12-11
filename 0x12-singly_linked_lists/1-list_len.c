#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the num of elements
 * in a linked list
 * @h: linked list pointer
 * Return: num of elements
 */

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}

