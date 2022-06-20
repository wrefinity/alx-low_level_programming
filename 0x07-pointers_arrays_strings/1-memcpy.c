#include "main.h"

/**
 * _memcpy - Copies memory area
 *
 * @dest: the memory area to copy from
 * @n: the number of bytes to copy
 * @src: the memory area to copy from
 *
 * Return: a pointer to the dest variable
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}

	return (dest);
}
