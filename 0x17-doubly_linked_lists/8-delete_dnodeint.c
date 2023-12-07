#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a linked list.
 * @head: head node
 * @index: index
 * Return: 1 on success and -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = *head;

	if (index == 0)
	{
		if (current == NULL)
			return (-1);

		*head = current->next;

		if (current->next != NULL)
			current->next->prev = NULL;

		free(current);
		return (1);
	}

	while (index > i)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	if (current->prev != NULL)
		current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);

	return (1);
}
