#include "lists.h"

/**
 *reverse_listint - function that reverses a listint_t linked list.
 *@head: A pointer to the head of the list
 *Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head, *next;

	while (current != NULL)
	{
		/* Store the next node */
		next = current->next;
		/* Reverse the pointer */
		current->next = prev;
		/* Move the 'prev' pointer one step forward */
		prev = current;
		/* Move the 'current' pointer one step forward */
		current = next;
	}
	/* Update the head to point to the new first node */
	*head = prev;

	return (*head);
}
