#include "hash_tables.h"

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
