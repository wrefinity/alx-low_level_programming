#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts unique nodes
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: success or failure.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tot, *h;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tot = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (tot == h)
		{
			tot = head;
			while (tot != h)
			{
				nodes++;
				tot = tot->next;
				h = h->next;
			}

			tot = tot->next;
			while (tot != h)
			{
				nodes++;
				tot = tot->next;
			}

			return (nodes);
		}

		tot = tot->next;
		h = (h->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: num of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n, x = 0;

	n = looped_listint_len(head);

	if (n == 0)
	{
		for (; head != NULL; n++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (x = 0; x < n; x++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (n);
}

