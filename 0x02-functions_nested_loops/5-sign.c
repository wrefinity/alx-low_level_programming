#include <stdio.h>
#include "main.h"

/**
 * print_sign - This program prints sign of a number
 * @n: The value to check
 * Return: 1 if it is positive, 0 if its zero and -1 if its negative
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}

}
