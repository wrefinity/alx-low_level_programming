#include "hash_tables.h"
/**
 *hash_table_get - retrieves a value associated with a key
 *
 *@ht: hash table to search
 *@key: defines the position
 *
 *Return: value associated a key else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int pos;/*defines the index*/

	if (key == NULL || ht == NULL)
		return (NULL);
	pos = key_index((const unsigned char *)key, ht->size);
	node = ht->array[pos];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
