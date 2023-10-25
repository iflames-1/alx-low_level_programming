#include "lists.h"

/**
 *insert_nodeint_at_index - function that insert a new node at a given position
 *@head: A pointer to the head of the list
 *@idx: index
 *@n: num
 *Return:  the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *temp_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; temp_node != NULL; i++)
	{
		if (i == (idx - 1))
		{
			new_node->next = temp_node->next;
			temp_node->next = new_node;
			return (new_node);
		}
		temp_node = temp_node->next;
	}

	free(new_node);
	return (NULL);
}
