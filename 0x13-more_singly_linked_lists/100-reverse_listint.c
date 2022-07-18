#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of
 *        the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *to, *fro;

	if (head == NULL || *head == NULL)
		return (NULL);

	fro = NULL;

	while ((*head)->next != NULL)
	{
		to = (*head)->next;
		(*head)->next = fro;
		fro = *head;
		*head = to;
	}

	(*head)->next = fro;

	return (*head);
}
