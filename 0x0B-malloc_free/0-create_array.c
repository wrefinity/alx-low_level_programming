#include "main.h"
#include <stdlib.h>

/**
 * create_array - an array func to initializes it with a specific char.
 * @size: defines the size of the array to be initialized.
 * @c: defines the specific char to intialize the array with.
 *
 * Return: Null If size == 0 else the array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}

