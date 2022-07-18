#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of unique nodes
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: success or failure
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *tot, *h;
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
 * free_listint_safe - Frees a listint_t list safely (ie.
 *                     can free lists containing loops)
 * @h: A pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nod, x;

	nod = looped_listint_count(*h);

	if (nod == 0)
	{
		for (; h != NULL && *h != NULL; nod++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (x = 0; x < nod; x++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (nod);
}

