#include "main.h"
#include <ctype.h>

/**
 * _isupper - check for uppercase characters
 * @c: a variable that stores letters
 * Return: Returns a value of 1 if the variable c contains an uppercase
 */

int _isupper(int c)
{
	if (isupper(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
