#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to the end
 * of dlistint_t list
 * @head: pointer
 * @n: data
 * Return: new elem address
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	end = *head;

	while (end->next != NULL)
	{
		end = end->next;
	}
	new->prev = end;
	end->next = new;

	return (new);
}
