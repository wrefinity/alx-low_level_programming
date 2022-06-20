#include "main.h"

/*
 * _memset - fills memory with a constant byte
 *
 * @s: the pointer variable
 * @b: the constant byte
 * @n: the number of byte to fill
 *
 * Return: a pointer to the memory area
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);

}
