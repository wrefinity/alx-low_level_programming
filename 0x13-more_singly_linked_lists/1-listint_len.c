/*
 * File: 1-listint_len.c
 * Auth: Andrew Ishaku Wreford
 */

#include "lists.h"
/**
 * listint_len - return elements of a listint_t list
 * @h: singly linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}

	return (x);
}
