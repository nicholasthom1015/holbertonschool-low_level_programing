#include "lists.h"

/**
 * add_dnodeint - adds a new node at the start of dlistint_t list
 * @head: pointer to head of dlistint_t list
 * @n: integer for new node to contain
 *
 * Return: if function fails- NULL
 *	O/w: address of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
