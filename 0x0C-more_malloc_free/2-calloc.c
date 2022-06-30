#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: Null If nmemb = 0, size = 0 else a memory pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *alloc;
	char *ptrr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	alloc = malloc(size * nmemb);

	if (alloc == NULL)
		return (NULL);

	ptrr = alloc;

	for (i = 0; i < (size * nmemb); i++)
		ptrr[i] = '\0';

	return (alloc);
}

