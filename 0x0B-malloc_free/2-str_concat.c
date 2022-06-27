#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function to concatenates two strings.
 * @s1: first string to be concatenated upon.
 * @s2: second string to be concatenated to s1.
 *
 * Return: Null if concatenation fails else concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int i, str_index = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concatenated = malloc(sizeof(char) * len);

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concatenated[str_index++] = s1[i];

	for (index = 0; s2[index]; index++)
		concatenated[str_index++] = s2[i];

	return (concatenated);
}
