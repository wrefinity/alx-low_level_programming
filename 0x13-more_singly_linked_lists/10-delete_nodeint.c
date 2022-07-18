#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: defines the node index to be deleted
 *
 * Return: On success - 1 else  -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *cp = *head;
	unsigned int x;

	if (cp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cp);
		return (1);
	}

	for (x = 0; x < (index - 1); x++)
	{
		if (cp->next == NULL)
			return (-1);

		cp = cp->next;
	}

	tmp = cp->next;
	cp->next = tmp->next;
	free(tmp);
	return (1);
}

