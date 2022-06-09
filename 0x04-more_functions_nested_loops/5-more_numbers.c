#include "main.h"

/**
 * more_numbers - prints 0 - 14
 *
 * Return: void
 */

void more_numbers(void)
{
	char n, z;
	int i = 0;

	while (i < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			z = n;
			if (n > 9)
			{
				_putchar('1');
				z = n % 10;
			}
			_putchar('0' + z);
		}

		_putchar('\n');
		i++;
	}
}
