#include <stdlib.h>
#include "main.h"
/**
* _strstr - function to locate a substring
*
* @haystack: the string to search
* @needle: the substring to search for
*
* Return: a pointer to the beginning of the located substring, or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int x = 0;

	while (needle[x] != '\0')
		x++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != x)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
