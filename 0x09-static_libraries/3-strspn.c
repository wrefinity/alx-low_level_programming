#include "main.h"

/**
 * _strspn - gets a prefix length of a substring
 *
 * @s: segment to return bytes from
 * @accept: the bytes to check
 *
 * Return: the number of bytes in the @s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, len = 0;


	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					len++;
			}
		}
		else
			return (len);

	}
	return (len);
}
