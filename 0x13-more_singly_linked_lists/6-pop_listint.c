#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked listint file and returns the
 * head node's data
 * @head: linked list
 * Return: head nodes data, else,0
 */

int pop_listint(listint_t **head)
{
	listint_t *x;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;
	x = (*head)->next;
	free(*head);
	*head = x;

	return (data);
}
