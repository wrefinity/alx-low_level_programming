#include "lists.h"
#include <string.h>
/**
  * add_node - add new nodes to the list
  * @head: current place in the list
  * @str: string to add to the head
  * Return: pointer to current position in list
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dup;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}

