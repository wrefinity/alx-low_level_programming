#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - This program prints numbers to 98
 * @n: a give integer
 *
 * Return: void
 */

void print_to_98(int n)
{
if (n <= 98)
{
for (n = n; n <= 98; n++)
{
printf("%i", n);
if (n != 98)
{
putchar(',');
putchar(' ');
}
}
}
else
{
for (n =n; n >= 98; n--)
if (n != 98)
{
printf("%i, ", n);
putchar(',');
putchar(' ');

}
}
}
