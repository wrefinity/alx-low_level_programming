#include <stdio.h>
#include "main.h"

/**
 * times_table - prints time table
 *
 * Description: to print time table
 * Return: void
 */

void times_table(void)
{
int num, nums;


for (num = 0; num <= 9; num++)
{
for (nums = 0; nums <= 9; nums++)
{
printf("%2d", num * nums);
if (nums != 9)
{
putchar(',');
putchar('.');
}
}
putchar('\n');
}
}
