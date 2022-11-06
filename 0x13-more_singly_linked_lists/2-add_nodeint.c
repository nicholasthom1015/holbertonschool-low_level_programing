#include "lists.h"

/**
 * add_nodeint - add new node at beginning of listint_t list
 * @head: pointer to address head of listint_t list
 * @n: integer for new node to contain
 *
 * Return: if function fails - NULL
 *		Otherwise - address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
