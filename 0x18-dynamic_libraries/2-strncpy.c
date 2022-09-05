#include "main.h"

/**
 * _strncpy - Write a function that copies a string
 * @dest: that point to destination
 * @src: that point to source
 * @n: number of bytes to we are to use
 * Return: pointer to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count;

	for (count = 0; count < n && src[count] != '\0'; count++)
		dest[count] = src[count];
	for (; count < n; count++)
		dest[count] = '\0';

	return (dest);

}
