#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_table_t *current = (hash_table_t *)ht;

	printf("{");
	while (i < ht->size - 1)
	{
		while(current->array[i] != NULL)
		{
			if (current->array[i]->key)
			{
				printf("'%s': '%s'", current->array[i]->key, current->array[i]->value);

				if (current->array[i]->next != NULL || i < ht->size - 1)
					printf(", ");
			}
			current->array[i] = current->array[i]->next;
		}
		i++;
	}

	printf("}\n");

	return;
}
