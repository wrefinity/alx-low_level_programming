#include "main.h"
/**
 * print_last_digit - prints the last digit of a numer.
 * @z: digit to find the last place of.
 * Return: The last digit.
 */
int print_last_digit(int z)
{
	if (z < 0)
		z = z * -1;
	_putchar((z % 10) + '0');
	return (z % 10);
}
