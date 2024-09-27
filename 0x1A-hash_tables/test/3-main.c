#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
	unsigned long int index;
	const unsigned char *key1 = (const unsigned char *)"betty", *value1 = (const unsigned char *)"cool";
	const unsigned char *key2 = (const unsigned char *)"hetairas", *value2 = (const unsigned char *)"cool";
	const unsigned char *key3 = (const unsigned char *)"mentioner", *value3 = (const unsigned char *)"cool";

	ht = hash_table_create(1024);
    hash_table_set(ht, (const char *)key1, (const char *)value1);
	hash_table_set(ht, (const char *)key2, (const char *)value2);
	hash_table_set(ht, (const char *)key3, (const char *)value3);

	index = key_index(key1, 1024);

	if (ht->array[index] != NULL)
	{
		printf("key-> %s value-> %s\n", ht->array[index]->key, ht->array[index]->value);
		printf("key-> %s value-> %s\n", ht->array[index]->key, ht->array[index]->value);
		printf("key-> %s value-> %s\n", ht->array[index]->key, ht->array[index]->value);
	}
	else
		printf("Key not found in hash table.\n");

	return (EXIT_SUCCESS);
}

/*
char *strdup(const char *s);
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);

hetairas collides with mentioner
heliotropes collides with neurospora
depravement collides with serafins
stylist collides with subgenera
joyful collides with synaphea
redescribed collides with urites
dram collides with vivency
*/