#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements
 * of a list_t list
 * @h: pointer to the list
 * Return: num of nodes
 */

size_t print_list(const list_t *h)
{
	size_t p = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		p++;
	}
	return (p);
}

