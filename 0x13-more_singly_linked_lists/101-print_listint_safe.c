#include "lists.h"

/**
 *print_listint_safe - function that prints a listint_t linked list.
 *@head: A pointer to the head of the list
 *Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	/* Count of nodes processed */
	size_t count = 0;
	/* Slow-moving pointer */
	const listint_t *tortoise = head;
	/* Fast-moving pointer */
	const listint_t *hare = head;

	/* Exit if the head is NULL */
	if (head == NULL)
		exit(98);

	while (tortoise && hare && hare->next)
	{
		/* Move the tortoise one step */
		tortoise = tortoise->next;
		/* Move the hare two steps */
		hare = hare->next->next;
		/* Increment the node count */
		count++;

		if (tortoise == hare)
		{
			/* If they meet, there's a loop in the list */
			printf("[%p] %d\n", (void *)tortoise, tortoise->n);
			return (count);
		}
	}

	/* If the loop finishes, there's no loop in the list */
	return (count);
}
