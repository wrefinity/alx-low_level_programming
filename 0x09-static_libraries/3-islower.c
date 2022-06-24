#include <stdio.h>
#include "main.h"

/**
 * _islower - This program checks for lower case
 * @c: contain value to be checked
 * Description: To check for lowercase
 * Return: 1 if c is lower and 0 if otherwise
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);

}
