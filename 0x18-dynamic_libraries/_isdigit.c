#include "main.h"
#include <ctype.h>
/**
 * _isdigit - a function to check for digit from 0-9
 * @c: as a parameter. If it's digit print 1 if otherwise return 0
 * Return: always 0 (success).
 */
int _isdigit(int c)
{
	if (isdigit(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
