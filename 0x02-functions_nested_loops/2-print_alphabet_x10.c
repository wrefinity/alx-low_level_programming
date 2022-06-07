#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - This program prints alphabets 10 times
 *
 * Description: To print alphabets
 * Return: Always void
 */

void print_alphabet_x10(void)
{
	int time, count;
	for (time = 1; time <= 10; time++)
	{
		for (count = 97; count <= 122; count++)
		{
			putchar(count);
		}
		putchar('\n');
	}
}
