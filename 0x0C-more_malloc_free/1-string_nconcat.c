#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * string_nconcat - concatenate two strings base on n bytes.
 * @s1: defines the source string
 * @s2: string to concatenate up to n bytes
 * @n: number of bytes to truncate by
 * Return: pointer to new buffer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concated;
	unsigned int count1, count2, space, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (count1 = 0; s1[count1]; count1++)
		;
	for (count2 = 0; s2[count2]; count2++)
		;
	count2 > n ? (count2 = n) : (n = count2);
	space = count1 + count2 + 1;
	concated = malloc(space * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < space - 1; i++)
		i < count1 ? (concated[i] = s1[i]) : (concated[i] = s2[i - count1]);
	concated[space] = '\0';
	return (concated);
}

