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
	while (*dest != '\0')
	{
		*dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		*dest++;
		*src++;
	}
	*dest = '\0';

	return (*dest);
}
