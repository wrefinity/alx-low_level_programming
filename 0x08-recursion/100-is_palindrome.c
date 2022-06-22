#include "main.h"

/**
 * pali_checker - defines the string to check
 *
 * @str: defines the string to be checked
 * @len: the length of the string
 * @i: defines the incrementor variable
 *
 * Return: 1 if the string is a palindrome else 0
 */

int pali_checker(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
		return (pali_checker(str, len - 1, i + 1));
	if (str[i] != str[len])
		return (0);
	return (1);
}

/**
 * _strlen_checker - the function returns a string length
 *
 * @c: the string length to check
 *
 * Return: the length of the string @c
 */

int _strlen_checker(char *c)
{
	if (*c != '\0')
		return (1 + _strlen_checker(c + 1));

	return (0);
}

/**
 * is_palindrome - a palindrome function
 *
 * @s: defines the string to check
 *
 * Return: 1 if the string is a palindrome else 2
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len = _strlen_checker(s) - 1;

	return (pali_checker(s, len, i));
}
