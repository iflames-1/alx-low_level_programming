#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a dlistint_t list
 * @h: head node
 * Return: num of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
