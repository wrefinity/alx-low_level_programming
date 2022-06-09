#include "main.h"

/**
 * print_square - check for a digit
 * @n: number of _ to be printed
 * Return: void
 */

void print_square(int n)
{
	int z = 0, c;

	while (z < n && n > 0)
	{
		c = 0;
		while (c < n)
		{
			_putchar('#');
			c++;
		}
		_putchar('\n');
		z++;
	}
	if (z == 0)
		_putchar('\n');
}
