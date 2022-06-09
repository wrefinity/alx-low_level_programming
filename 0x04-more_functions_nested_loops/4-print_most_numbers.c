#include "main.h"

/**
 * print_most_numbers - prints 0 - 9 except 2, 4
 * Description: prints
 * Return: void
 */

void print_most_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
	c++;
	}
_putchar('\n');
}
