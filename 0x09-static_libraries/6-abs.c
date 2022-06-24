#include <stdio.h>
#include "main.h"

/**
 * _abs - This program prints absolute value of an integer
 * @num: the input
 * Description: To print an absolute value
 * Return: return an int
 */

int _abs(int num)
{

if (num > 0)
return (num);
else if (num == 0)
return (0);
else
return (-1 * num);
}
