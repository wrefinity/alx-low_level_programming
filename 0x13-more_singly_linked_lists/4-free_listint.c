#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the list head to be freed.
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
