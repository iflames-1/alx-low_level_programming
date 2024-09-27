#include "lists.h"

/**
 *free_listint_safe - function that frees a listint_t list.
 *@h: head pointer
 *Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current = *h, *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		count++;
		current = next;
		if (current == *h)
		{
			/* Set the head to NULL when the whole list is freed */
			*h = NULL;
			return (count);
		}
	}
	*h = NULL;
	return (count);
}
