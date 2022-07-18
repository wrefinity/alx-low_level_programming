#include "lists.h"
/**
 * listint_len - return elements of a listint_t list
 * @h: singly linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t x;

	for (x = 0; h; x++)
		h = h->next;
	return (x);
}
