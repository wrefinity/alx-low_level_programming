#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @n: number of bytes to copy from memory area
 * @src: source
 * @dest: destination
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	 int count = n;

	if (count > 0)
	{
		int x;

		for (x = 0; x < count; x++)
			dest[x] = src[x];
	}
	return (dest);
}
