#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
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
  * _strdup - create string duplicate
  * @src: source string
  * Return: dest string
  */
void *_strdup(const char *src)
{
	int l, i;
	char *dest;

	l = _strlen(src);
	dest = malloc((l + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
  * add_node_end - add new nodes to the end of the list
  * @head: current place in the list
  * @str: string to add to the head
  * Return: pointer to current position in list
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;
	char *dup_str;

	if (str == NULL)
		return (NULL);
	dup_str = _strdup(str);
	if (dup_str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = dup_str;
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (*head);
}

