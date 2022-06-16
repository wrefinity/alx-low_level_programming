include "main.h"

/**
 * _strcmp - function to compare charcter
 * @s1: first variable to compare
 * @s2: second variable for comparism
 * Return: return (0)
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
		;
	return (s1[i] - s2[i]);
}
