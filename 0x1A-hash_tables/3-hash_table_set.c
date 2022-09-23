#include "hash_tables.h"
/**
 *hash_table_set - adds an element to the hash table
 *@ht: hash pointer
 *@key: key pointer
 *@value: value to add
 *Return: 1 if is success or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long position, size;
	hash_node_t *node;
	
	if (ht  == NULL || value == NULL || key == NULL)
		return (0);
	
	size = ht->size;
	position = key_index((const unsigned char *)key, size);
	
	if (ht->array[position] != NULL && strcmp(ht->array[position]->key, key) == 0)
	{
		ht->array[position]->value = strdup(value);
		return (1);
	}
	
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[position];
	ht->array[position] = new_node;
	return (1);
}
