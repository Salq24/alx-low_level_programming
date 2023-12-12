#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * of a linked list
 * @head: linked list
 * @index: node index
 * Return: node , else null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *x = head;
	unsigned int nd = 0;

	while (x && nd < index)
	{
		x = x->next;
		nd++;
	}
	return (x ? x : NULL);
}

