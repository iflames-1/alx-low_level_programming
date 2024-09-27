#include "lists.h"

/**
 * _strlen - Returns the length of a string
 * @s: string to be counted
 * Return: lenth
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 *add_node_end - Adds a new node at the end of a list_t list.
 *@head: A pointer to a pointer to the head of the list.
 *@str: The string to be added to the new node.
 *Return: The address of the new element, or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(str);
	new_node->next = NULL; /* Initialize the new node's next pointer to NULL */

	if (*head == NULL) /* If the list is empty, set the new node as the head */
	{
		*head = new_node;
	}
	else
	{
		list_t *current;

		current = *head; /* Start at the head of the list */
		while (current->next != NULL)
		{
			current = current->next; /* Traverse to the last node */
		}
		current->next = new_node; /* Attach the new node to the last node */
	}

	return (new_node);
}
