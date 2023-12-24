#include "hash_tables.h"

/**
 * shash_table_print_rev - prints a hash table in reverse
 * @ht: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp_node;

	if (ht == NULL)
		return;

	tmp_node = ht->stail;
	printf("{");
	while (tmp_node)
	{
		printf("'%s': '%s'", tmp_node->key, tmp_node->value);
		tmp_node = tmp_node->sprev;
		if (tmp_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp_node, *aux_node;

	if (!ht)
		return;

	tmp_node = ht->shead;
	while (tmp_node)
	{
		aux_node = tmp_node;
		free(aux_node->key);
		free(aux_node->value);
		free(aux_node);
		tmp_node = tmp_node->snext;
	}
	free(ht->array);
	free(ht);
}

/**
 * _free - free function
 * @key: key
 * @value: value
 * @new_node: node
 */
void _free(char *key, char *value, hash_node_t *new_node)
{
	if (value)
		free(value);
	if (key)
		free(key);
	if (new_node)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
	}
}

/**
 * s_free - free function
 * @key: key
 * @value: value
 * @new_node: node
 */
void s_free(char *key, char *value, shash_node_t *new_node)
{
	if (value)
		free(value);
	if (key)
		free(key);
	if (new_node)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
	}
}

/**
 * s_handle_collision - handle collision
 * @current_node: current node
 * @value_dup: value
 * @key_dup: key
 * @index: index
 * Return: 1 on success and 0 otherwise
 */
int s_handle_collision(shash_table_t *ht, shash_node_t *new_node, char *value,
char *key, unsigned long int index)
{
	while (new_node)
	{
		if (strcmp(new_node->key, key) == 0)
		{
			new_node->value = value;
			s_free(key, NULL, NULL);
			return (1);
		}
		if (new_node->next == NULL)
			break;
		new_node = new_node->next;
	}

	new_node->key = key;
	new_node->value = value;
	return (shash_node_set(ht, new_node, index));
}
