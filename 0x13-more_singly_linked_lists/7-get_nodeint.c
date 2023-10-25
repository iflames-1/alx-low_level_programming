#include "lists.h"

/**
 *get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list.
 *@head: A pointer to the head of the list
 *@index: index of the node, starting at 0
 *Return:  the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;

	for (i = 0; current != NULL; i++)
	{
		if (i == index)
			return (current);
		current = current->next;
	}

	return (NULL);
}
