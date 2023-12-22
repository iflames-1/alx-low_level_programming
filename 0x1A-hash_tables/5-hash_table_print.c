#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);

			printf(", ");

			current = current->next;
		}
		i++;
	}

	printf("}\n");

	return;
}
