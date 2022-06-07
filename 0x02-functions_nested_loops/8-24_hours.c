#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - print every mins in the day of jack
 *
 * Description: To print every mins
 * Return: void
 */

void jack_bauer(void)
{
int hour, min;

for (hour = 00; hour < 24; hour++)
{
for (min = 00; min < 60; min++)
{
if (hour < 10)
printf("0%d:", hour);
else
printf("%d:", hour);


if (min < 10)
printf("0%d\n", min);
else
printf("%d\n", min);
}

}

}
