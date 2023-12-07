#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to head
 * @n: element n in node
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (*head != NULL)
	{
		new->next = *head;
		(*head)->prev = new;
	} else
		new->next = NULL;

	*head = new;

	return (new);
}
