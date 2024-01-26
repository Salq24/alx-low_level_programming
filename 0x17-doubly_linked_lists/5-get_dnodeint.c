#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth
 * node of a dlistint_t linked list
 * @head: pointer
 * @index: node index
 * Return: node, else, NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cnt = 0;

	while (head != NULL)
	{
		if (cnt == index)
		{
			return (head);
		}
		head = head->next;
		cnt++;
	}
	return (NULL);
}
