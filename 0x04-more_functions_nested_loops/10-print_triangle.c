#include "main.h"

/**
 * print_triangle - check for a digit
 * @size : integer type
 * Return:void
 */

void print_triangle(int size)
{
	int c = 1, x;

	while (c <= size && size > 0)
	{
		x = 0;
		while (x < size - c)
		{
			_putchar(' ');
			x++;
		}
		ii = 0;
		while (ii < c)
		{
			_putchar('#');
			x++;
		}

		_putchar('\n');
		c++;
	}
	if (c == 1)
		_putchar('\n');
}
