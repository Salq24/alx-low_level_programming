#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end
 * of a listint_t list
 * @head: first node pointer
 * @n: data
 * Return: address of new element, else, null
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *x;
	listint_t *sec = *head;

	x = malloc(sizeof(listint_t));

	if (x == NULL)
		return (NULL);

	x->n = n;
	x->next = NULL;

	if (*head == NULL)
	{
		*head = x;
		return (x);
	}
	while (sec->next)
		sec = sec->next;
	sec->next = x;

	return (x);
}
