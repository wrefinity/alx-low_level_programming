#include "main.h"
/**
 * _strncpy - function to copy string
 * @dest: defines the destination variable
 * @src: defines the source variable
 * @n: defines the conditional varible
 * Return: return the varible defined
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
