#include "main.h"

/**
 * _strcat - function to concantenate two string
 * @dest: defines the destination variable
 * @src: the second variable to concantenate
 *
 * Return: return the concatenated string
 */


char *_strcat(char *dest, char *src)
{
	int i, j;
	
	i = 0;
	for (j = 0; dest[j] != '\0'; j++);

	while (src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
