#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (i == index)
			return (current);

		current = current->next;
		i++;
	}

	return (NULL);
}
