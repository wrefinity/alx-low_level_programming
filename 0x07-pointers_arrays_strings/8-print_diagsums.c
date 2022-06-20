#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers
 *
 * @a: defines the array
 * @size: defines the size of the array
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int x = 0;
	int y = size - 1;
	int sum1 = sum2 = 0;

	while (x <= (size * size))
	{
		sum1 = sum1 + a[x];
		x = x + size + 1;
	}

	while (y < (size * size - 1))
	{
		sum2 += a[y];
		y = y + size - 1;
	}

	printf("%d, %d\n", sum1, sum2);
}
