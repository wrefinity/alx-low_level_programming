#include "search_algos.h"

/**
 * interpolation_search - search a value in a sorted array using \
 * an interpolation search.
 * @array: The array to search in.
 * @size: The array length.
 * @value: the search value.
 *
 * Return: The first index of the value in the array else  -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t strt = 0, end = size - 1, pos = 0;
	double tmp;

	if (!array)
		return (-1);
	while (array[end] != array[strt])
	{
		tmp = (double)(end - strt) / (array[end] - array[strt]);
		pos = strt + (tmp * (value - array[strt]));
		if (pos >= size)
		{
			printf("Value checked array[%d] is out of range\n", (int)pos);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			strt = pos + 1;
		else
			end = pos - 1;
	}
	return (value == array[strt] ? (int)strt : -1);
}
