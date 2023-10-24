#include "lists.h"

/**
 *delete_nodeint_at_index -  function that deletes the node
 * at index index of a listint_t linked list.
 *@head: A pointer to the head of the list
 *@index: index of the node that should be deleted
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current, *previous;
	/* Check if the list is empty */
	if (*head == NULL)
		return (-1);

	current = *head;
	/* Special case: Delete the head node */
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	/* Traverse the list to find the node to delete */
	while (current != NULL && i != index)
	{
		previous = current;
		current = current->next;
		i++;
	}
	/* Check if the index is out of bounds */
	if (current == NULL)
		return (-1);
	/* Update the previous node's next pointer to skip the current node */
	previous->next = current->next;
	free(current);

	return (1);
}
