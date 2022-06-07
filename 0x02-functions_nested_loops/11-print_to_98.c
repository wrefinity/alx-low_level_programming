#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from n to 98.
 * @z: the number to start counting from to 98
 * Return: void returns nothing.
 */
void print_to_98(int z)
{
	if (z < 98)
	{
		for (z = z; n < 98; z++)
			printf("%d, ", z);
		printf("%d\n", 98);
	}
	else
	{
		for (z = z; z > 98; z--)
			printf("%d, ", z);
		printf("%d\n", 98);
	}
}
