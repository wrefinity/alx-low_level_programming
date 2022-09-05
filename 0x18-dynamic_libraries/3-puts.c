#include "main.h"

/**
 * _puts - function that prints a string
 * @str: sring to be print out
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}

	_putchar('\n');
}
