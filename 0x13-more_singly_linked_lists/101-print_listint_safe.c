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
	const listint_t *tortoise = head;
	const listint_t *hare = head;

	if (head == NULL)
		exit(98);

	tortoise = head;
	hare = head;

	while (hare != NULL && hare->next != NULL)
	{

		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;

		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
			exit(98);
		}
	}
	printf("[%p] %d\n", (void *)tortoise, tortoise->n);

	return (count);
}
