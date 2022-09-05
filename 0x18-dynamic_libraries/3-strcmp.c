#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: that point to string 1
 * @s2: that point to str 2
 * Return: value less than 0 if string is less than the other
 */
int _strcmp(char *s1, char *s2)
{
	int counter, cmpVal;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}
	cmpVal = s1[counter] - s2[counter];
	return (cmpVal);
}
