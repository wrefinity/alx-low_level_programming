#include "main.h"
#include <string.h>

/**
 * _strchr - function that locates a character in a string.
 * @s: the string to be scanned
 * @c: the character to be searched
 * Return: a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
