#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @n: bytes of memory thats to be filled
 * @s: area poited to
 * @b: constant to fill memory with
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	x = 0;
	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
