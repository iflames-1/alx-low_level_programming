#include "lists.h"

/**
 *reverse_listint - function that reverses a listint_t linked list.
 *@head: A pointer to the head of the list
 *Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *current = *head, *next_node;

	while (current != NULL)
	{
		/* save the next node */
		next_node = current->next;
		/* make the next_node point to the beginning of the prev_node(transverse) */
		current->next = prev_node;
		/* update prev_node to point to current */
		prev_node = current;
		/* */
		current = next_node;
	}
	/* Update the head to point to the new first node */
	*head = prev_node;

	return (*head);
}
