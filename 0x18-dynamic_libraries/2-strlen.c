#include "main.h"
#include <string.h>
/**
 * _strlen - function that returns the length of a string.
 * @s: the length of a string
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
