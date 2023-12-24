#include "hash_tables.h"

/**
 * free_dup - frees duplicated strings from hash_table_set
 * @value: free value
 * @key: free key
 */
void free_dup(char *value, char *key)
{
	if (value)
		free(value);
	if (key)
		free(key);
}

/**
 * _free - free function
 * @key: key
 * @value: value
 * @new_node: node
 */
void _free(char *key, char *value, hash_node_t *new_node)
{
	if (key)
		free(key);
	if (value)
		free(value);
	if (new_node)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
	}
}

/**
 * handle_collision - handle collision
 * @current_node: current node
 * @value_dup: value
 * @key_dup: key
 * Return: 1 on success and 0 otherwise
 */
int handle_collision(hash_node_t *current_node, char *value, char *key)
{
	while (current_node != NULL)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			current_node->value = value;
			free(key);
			return (1);
		}
		if (current_node->next == NULL)
			break;
		current_node = current_node->next;
	}

	current_node->next = malloc(sizeof(hash_node_t));
	if (current_node->next == NULL)
	{
		_free(key, value, current_node);
		return (0);
	}

	current_node = current_node->next;
	current_node->next = NULL;
	current_node->key = key;
	current_node->value = value;

	return (1);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table we are add or updating.
 * @key: the key
 * @value: value associated with the key
 * Return: 1 on success and 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current_node, *new_node;

	if (!key || !ht)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];

	if (current_node == NULL)
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);

		new_node->key = strdup(key);
		new_node->value = strdup(value);
		if (!new_node->key || new_node->value == NULL)
		{
			_free(new_node->key, new_node->value, new_node);
			return (0);
		}
		new_node->next = ht->array[index];
		ht->array[index] = new_node;

		return (1);
	}
	else
	{
		if (handle_collision(current_node, strdup(value), strdup(key)))
			return (1);
	}

	return (1);
}
