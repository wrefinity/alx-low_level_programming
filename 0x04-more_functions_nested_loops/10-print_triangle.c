#include "main.h"

/**
 * print_triangle - check for a digit
 * @size : integer type
 * Return:void
 */

void print_triangle(int size)
{
	int z = 1, x;

	while (z <= size && size > 0)
	{
		x = 0;
		while (x < size - z)
		{
			_putchar(' ');
			x++;
		}
		x = 0;
		while (x < z)
		{
			_putchar('#');
			x++;
		}

		_putchar('\n');
		z++;
	}
	if (i == 1)
		_putchar('\n');
}
