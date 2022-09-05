#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string to get
 * @accept: that contain only bytes required
 * Return: Returns the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int required  = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				required++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (required);
		}
		i++;
	}
	return (required);
}
