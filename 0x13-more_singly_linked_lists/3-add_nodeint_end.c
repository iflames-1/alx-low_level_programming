#include "lists.h"

/**
 *add_nodeint_end - a function that adds a new node
 * at the end of a listint_t list.
 *@head: A pointer to the head of the list
 *@n: data
 *Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node; /* case where lisint_t is empty */
	else
	{
		while (temp_node->next != NULL)
		{
			temp_node = temp_node->next;
		}
		temp_node->next = new_node;
	}

	return (new_node);
}
