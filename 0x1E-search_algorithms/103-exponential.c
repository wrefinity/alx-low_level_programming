#include "search_algos.h"

/**
 * print_array - prints array  contents.
 * @array: the array to print.
 * @l: left index of the array.
 * @r: right index of the array.
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	if (array)
	{
		printf("Searching in array: ");
		for (i = l; i < l + (r - l + 1); i++)
			printf("%d%s", *(array + i), i < l + (r - l) ? ", " : "\n");
	}
}

/**
 * binary_search_index1 - Searches a value in a sorted array using \
 * a binary search.
 * @array: The array to search.
 * @l: left index of the array.
 * @r: right index of the array.
 * @value: The value to search.
 *
 * Return: The first index of the value in the array, else  -1.
 */
int binary_search_index1(int *array, size_t l, size_t r, int value)
{
	size_t m;

	if (!array)
		return (-1);
	print_array(array, l, r);
	m = l + ((r - l) / 2);
	if (l == r)
		return (*(array + m) == value ? (int)m : -1);
	if (value < *(array + m))
	{
		return (binary_search_index1(array, l, m - 1, value));
	}
	else if (value == *(array + m))
	{
		return ((int)m);
	}
	else
	{
		return (binary_search_index1(array, m + 1, r, value));
	}
}

/**
 * exponential_search - Searches a value in a sorted array using \
 * an exponential search.
 * @array: array to search.
 * @size: search array length.
 * @value: search value.
 *
 * Return: The index of the value in the array else  -1.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t strt = 1, end = 2;

	if (!array || !size)
		return (-1);
	if (size < 2)
	{
		strt = 0;
		end = 1;
	}
	else
	{
		while (strt < size)
		{
			printf("Value checked array[%lu] = [%d]\n", strt, array[strt]);
			if (
				((array[strt] <= value) && (array[end] >= value))
				|| ((strt * 2) >= size)
				)
				break;
			strt *= 2;
			end = end * 2 < size ? end * 2 : size - 1;
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n", strt, end);
	return (binary_search_index1(array, strt, end, value));
}
