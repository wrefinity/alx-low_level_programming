#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - get the no of element in inked list
 * @h: linked list
 *
 * Return: number of element
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n_element = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		n_element++;
	}

	return (n_element);
}
