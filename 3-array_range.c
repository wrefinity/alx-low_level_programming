#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
  * array_range - creates an array of integers
  * @min: minimum value
  * @max: maximum value
  * Return: pointer to array of integers
  */
int *array_range(int min, int max)
{
	int *tr;
	int dim, i;

	if (min > max)
		return (NULL);
	dim = max - min + 1;
	ptr = malloc(dim * sizeof(*p));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < dim; min++, i++)
		ptr[i] = min;
	return (ptr);
}
