#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - This program prints the last digit
 *
 * Description: To print last digit
 * Return: Return the value of the last digit
 */

int print_last_digit(int num)
{

int res;

res = num % 10;
if (res < 0)
return(-1 * res);
else
return (res);

}
