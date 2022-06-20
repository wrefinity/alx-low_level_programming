#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - searchs a string for any of a set of bytes
 *
 * @s: the string to search
 * @accept: defines the search bytes
 *
 * Return: a pointer to the byte in @s
 */


char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}

	return (NULL)
}
