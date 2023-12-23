#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current;
	int print_comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (print_comma)
				printf(", ");

			printf("'%s': '%s'", current->key, current->value);

			current = current->next;
			print_comma = 1;
		}

		i++;
	}

	printf("}\n");
}
