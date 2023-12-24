#include "hash_tables.h"

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
 * shash_table_create - creates a sorted hash table.
 * @size: size of the array
 * Return: A pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *table;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(shash_table_t));
	if (!table)
		return (NULL);

	table->size = size;

	table->array = calloc(table->size, sizeof(shash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}

	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * shash_node_set - set sorted table
 * @ht: table head
 * @new_node: new node
 * @index: index
 * Return: 1 on sucess
 */
int shash_node_set(shash_table_t *ht, shash_node_t *new_node, unsigned long int index)
{
	shash_node_t *tmp_node = NULL;

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (!ht->shead)
	{
		new_node->sprev = new_node->snext = NULL;
		ht->shead = ht->stail = new_node;
	}

	else if (strcmp(ht->shead->key, new_node->key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		tmp_node = ht->shead;
		while (tmp_node->snext && strcmp(tmp_node->snext->key, new_node->key) < 0)
			tmp_node = tmp_node->snext;
		new_node->sprev = tmp_node;
		new_node->snext = tmp_node->snext;
		if (!tmp_node->snext)
			ht->stail = new_node;
		else
			tmp_node->snext->sprev = new_node;
		tmp_node->snext = new_node;
	}

	return (1);
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
		/* update just the value if key exists */
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

/**
 * shash_table_set - adds an element to the hash table
 * @ht: hash table we are add or updating.
 * @key: the key
 * @value: value associated with the key
 * Return: 1 on success and 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *current_node = NULL, *new_node = NULL;

	if (!key || !ht)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];

	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);

	/* if list is empty */
	if (current_node == NULL)
	{
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		if (!new_node->key || !new_node->value)
		{
			s_free(new_node->value, new_node->key, new_node);
			return (0);
		}
		return (shash_node_set(ht, new_node, index));
	}
	else
	{
		return (s_handle_collision(ht, new_node, strdup(value), strdup(key), index));
	}
}

/**
 * shash_table_get - retrieves value associated with a key
 * @ht: hash table we are looking into
 * @key: key we are looking for
 * Return: the value associated with key or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *node;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - prints a hash table
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	node = ht->shead;
	printf("{");
	while (node)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

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
