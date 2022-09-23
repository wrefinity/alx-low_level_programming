#include "hash_tables.h"

/**
 * shash_table_create - this function creates a hash_table of type
 * shash_table_t.
 * @size: this is the size of the new hash_table
 *
 * Return: On success, it returns the newly created hash_table.
 * On error, it returns NULL, and errno is set appropriately.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(shash_table_t));
	if (new == NULL)
		return (NULL);
	new->size = size;
	new->array = calloc(size, sizeof(shash_node_t *));
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
