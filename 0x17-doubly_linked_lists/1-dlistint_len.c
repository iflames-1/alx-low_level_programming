#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: head node
 * Return: number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while(h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
