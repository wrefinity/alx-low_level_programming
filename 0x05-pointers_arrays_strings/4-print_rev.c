#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the used string reference pointer
 * Return: 0
 */

void print_rev(char *s)
{
	int x = 0;

	while (s[x])
		x++;
	while (x--)
		_putchar(s[x]);
	_putchar('\n');
}
