#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head pointer
 * @idx: index
 * @n: data to insert
 * Return: pointed to inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *current = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->n = n;
		new->prev = NULL;
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	while (idx > i)
	{
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
		current = current->next;
		i++;
	}

	new->n = n;
	new->prev = current->prev;
	new->next = current;
	if (current->prev != NULL)
		current->prev->next = new;
	else
		*h = new;
	current->prev = new;

	return (new);
}
