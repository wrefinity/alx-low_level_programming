#include "search_algos.h"

/**
 * linear_search - search a number linearly in an array
 * @array: pointer to the first element of the array to search
 * @size: number of elements of the arrary to search in
 * @value: target value to search for
 * Return: return the index the value is located else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x = 0;

	if (array == NULL)
		return (-1);

	for (; x < size; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
