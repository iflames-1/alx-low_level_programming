#include "lists.h"

/**
 *free_listint2 - function that frees a listint_t list
 *and sets the head to NULL
 *@head: A pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next_node;

	if (head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}

	*head = NULL;
}
