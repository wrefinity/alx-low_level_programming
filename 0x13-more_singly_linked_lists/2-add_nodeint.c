#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add new node at the beginning of a listint_t
 * @head: current place in list
 * @n: int to add
 * Return: pointer current position
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
