#include "main.h"
#include <stdlib.h>

/**
 * _strchr -  a function to locates a character in a string
 *
 * @s: defines the string to check
 * @c: define the search character
 *
 * Return: a pointer to the first occurance of the character @c in the string
 * @s. Return NULL if the character isn't found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}

	if (c == '\0')
		return (s);

	return (NULL);
}
