#include "main.h"
/**
 * print_line - check the shortest distance.
 * @n: variable 
 * Return: 0
 */
void print_line(int n)
{
	int z = 0;

	if (n > 0)
	{
		while (z <= n)
		{
			_putchar('_');
			z++;
		}
	 _putchar('\n');
	}
	else
  {
  _putchar('\n');
  }
}
