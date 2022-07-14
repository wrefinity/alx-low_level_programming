#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * list_len - get number of nodes in the list
  * @h: singly linked list
  * Return: number of elements in a linked list
  */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
