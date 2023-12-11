#include "lists.h"

/**
 * add_nodeint - adds a new node at the
 * beginning of a listint_t list
 * @head: first node pointer
 * @n: data
 * Return: address of new element, else, null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *x;

	x = malloc(sizeof(listint_t));

	if (x == NULL)
		return (NULL);

	x->n = n;
	x->next = *head;
	*head = x;

	return (x);
}

