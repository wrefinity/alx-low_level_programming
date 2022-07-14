#include "lists.h"
#include <stdlib.h>
/**
  * _strlen - gets String length
  * @s: string
  * Return: length of the string
  */
int _strlen(const char *s)
{
	int x;

	for (x = 0; s[x]; x++)
		;
	return (x);
}
/**
  * add_node - add new nodes to the list
  * @head: current place in the list
  * @str: string to add to the head
  * Return: pointer to current position in list
  */
list_t *add_node(list_t **head, const char *str)
{
	int i, l;
	char *element;
	list_t *new;

	if (str == NULL || head == NULL)
		return (NULL);
	l = _strlen(str);
	new = *head;
	element = malloc((l + 1) * sizeof(char));
	if (element == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		element[i] = str[i];
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(element);
		return (NULL);
	}
	new->str = element;
	new->l = l;
	new->next = *head;
	*head = new;
	return (new);
}

