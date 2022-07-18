
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all elements of a list_t list
 * @h: singly linked list elements
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t x;

	for (x = 0; h; x++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}
